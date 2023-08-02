#include"motor.h"
#include<INTRINS.H>


char compare=0;
unsigned char timedata=0;

//绿底——灯亮为0； 白线——灯灭为1
sbit key1=P3^5;
sbit key2=P3^4;
sbit key3=P3^6;
sbit key4=P3^3;


void Timer0Init(void)		
{
	TL0 = 0x33;		
	TH0 = 0xFE;		
	TF0 = 0;		
	TR0 = 1;		
	ET0=1;
	EA=1;
	PT0=0;
}


void Delay1ms(unsigned int msx)		
{
	unsigned char i, j;
  int k=0;
	for(k=0;k<msx;k++)
	{
		_nop_();
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
	}
}

void Delay5us()		//@11.0592MHz
{
}


void main()
{
	unsigned char judge1=key1;
	unsigned char judge2=key2;
	unsigned char judge3=key3;
	unsigned char judge4=key4;
	unsigned char judge=0;
	compare=35;
	Timer0Init();
	stop();
	Delay1ms(300);
	while(1)
	{
		judge1=key1;
		judge2=key2;
		judge3=key3;
		judge4=key4;
		if((judge1==1&&judge2==0&&judge3==0&&judge4==1)||(judge1==0&&judge2==1&&judge3==0&&judge4==1)||(judge1==0&&judge2==1&&judge3==1&&judge4==0)||(judge1==0&&judge2==1&&judge3==1&&judge4==1)||(judge1==1&&judge2==1&&judge3==0&&judge4==1))
		{
			stop();//停止
		}
		else
		{
			if(judge1==1&&judge2==0&&judge3==1&&judge4==0)
			{
				if(judge==1)
				{
					stop();
					judge=0;
				}
				compare=30;
				goforward();//前进
			}
			if((judge1==0&&judge2==0&&judge3==1&&judge4==1)||(judge1==0&&judge2==0&&judge3==1&&judge4==0)||(judge1==0&&judge2==0&&judge3==0&&judge4==1)||(judge1==1&&judge2==0&&judge3==1&&judge4==1))
			{
				if(judge==1)
				{
					stop();
					judge=0;
				}
				compare=45;
				goturnright();//右拐前进
				if(key1==1&&key2==0&&key3==1&&key4==0)
				{
					goforward();//前进
				}
			}
			if((judge1==1&&judge2==1&&judge3==1&&judge4==0)||(judge1==1&&judge2==0&&judge3==0&&judge4==0)||(judge1==0&&judge2==1&&judge3==0&&judge4==0)||(judge1==1&&judge2==1&&judge3==0&&judge4==0))
			{
				if(judge==1)
				{
					stop();
					judge=0;
				}
				compare=40;
				goturnleft();//左拐前进
				if(key1==1&&key2==0&&key3==1&&key4==0)
				{
					goforward();//前进
				}
			}
			if((key1==0&&key2==0&&key3==0&&key4==0)||(judge1==1&&judge2==1&&judge3==1&&judge4==1))
		  {
				compare=36;
				if(judge==0)
				{
					stop();
					judge=1;
				}
				stopleft();	
			}

			
//			if(judge1==1&&judge2==0&&judge3==1&&judge4==1)//此题不需要
//			{
//				stopright();//原地右转
//			}
		}
	}
}

void Time0_Randow() interrupt 1
{
	TL0 = 0x33;		  
	TH0 = 0xFE;
	timedata++;
	if(timedata>100)
	{
		timedata=0;
	}
	if(timedata>=compare)
	{
		P1_4=0;
		P1_5=0;
		P2_4=0;
		P2_5=0;
	}
	else
	{
		P1_4=1;
		P1_5=1;
		P2_4=1;
		P2_5=1;
	}
}
