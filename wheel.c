#include"motor.h"

void go_leftfront()//��ǰ��ǰ��
{
	P2_0=1;
	P2_1=0;
}

void back_leftfront()//��ǰ�ֺ���
{
	P2_0=0;
	P2_1=1;
}

void stop_leftfront()//��ǰ��ֹͣ
{
	P2_0=0;
	P2_1=0;
}


void go_rightfront()//��ǰ��ǰ��
{
	P2_2=1;
	P2_3=0;
}

void back_rightfront()//��ǰ�ֺ���
{
	P2_2=0;
	P2_3=1;
}

void stop_rightfront()//��ǰ��ֹͣ
{
		P2_2=0;
	  P2_3=0;
	
}

void go_leftback()//�����ǰ��
{
	P1_0=1;
	P1_1=0;
}

void back_leftback()//����ֺ���
{
	P1_0=0;
	P1_1=1;
}

void stop_leftback()//�����ֹͣ
{
	P1_0=0;
	P1_1=0;
}

void go_rightback()//�Һ���ǰ��
{
	P1_2=0;
	P1_3=1;
}

void back_rightback()//�Һ��ֺ���
{
	P1_2=1;
	P1_3=0;
}

void stop_rightback()//�Һ���ֹͣ
{
	P1_2=0;
	P1_3=0;
}