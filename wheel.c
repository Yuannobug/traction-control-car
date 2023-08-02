#include"motor.h"

void go_leftfront()//左前轮前进
{
	P2_0=1;
	P2_1=0;
}

void back_leftfront()//左前轮后退
{
	P2_0=0;
	P2_1=1;
}

void stop_leftfront()//左前轮停止
{
	P2_0=0;
	P2_1=0;
}


void go_rightfront()//右前轮前进
{
	P2_2=1;
	P2_3=0;
}

void back_rightfront()//右前轮后退
{
	P2_2=0;
	P2_3=1;
}

void stop_rightfront()//右前轮停止
{
		P2_2=0;
	  P2_3=0;
	
}

void go_leftback()//左后轮前进
{
	P1_0=1;
	P1_1=0;
}

void back_leftback()//左后轮后退
{
	P1_0=0;
	P1_1=1;
}

void stop_leftback()//左后轮停止
{
	P1_0=0;
	P1_1=0;
}

void go_rightback()//右后轮前进
{
	P1_2=0;
	P1_3=1;
}

void back_rightback()//右后轮后退
{
	P1_2=1;
	P1_3=0;
}

void stop_rightback()//右后轮停止
{
	P1_2=0;
	P1_3=0;
}