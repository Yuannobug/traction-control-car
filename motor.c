#include"motor.h"


void goforward()//ǰ��
{
		go_leftfront();
		go_rightfront();
		go_leftback();
		go_rightback();

}

void retreat()//����
{

		back_leftfront();
		back_rightfront();
		back_leftback();
		back_rightback();
}

void stop()//ֹͣ
{
	stop_leftfront();
	stop_rightfront();
	stop_leftback();
	stop_rightback();

}

void goturnleft()//���ǰ��
{

	stop_leftfront();
	go_rightfront();
	stop_leftback();
	go_rightback();
}

void goturnright()//�ҹ�ǰ��(�޸İ棩
{
	go_leftfront();
	stop_rightfront();
	go_leftback();
	back_rightback();
}

void retreatleft()//��ת����
{

	stop_leftfront();
	back_rightfront();
	stop_leftback();
	back_rightback();
}


void retreatright()//��ת����
{

	back_leftfront();
	stop_rightfront();
	back_leftback();
	stop_rightback();
}

void stopleft()//ԭ����ת
{
	back_leftfront();
	go_rightfront();
	back_leftback();
	go_rightback();
}

void stopright()//ԭ����ת
{
	go_leftfront();
	back_rightfront();
	go_leftback();
	back_rightback();

}