#include"motor.h"


void goforward()//前进
{
		go_leftfront();
		go_rightfront();
		go_leftback();
		go_rightback();

}

void retreat()//后退
{

		back_leftfront();
		back_rightfront();
		back_leftback();
		back_rightback();
}

void stop()//停止
{
	stop_leftfront();
	stop_rightfront();
	stop_leftback();
	stop_rightback();

}

void goturnleft()//左拐前进
{

	stop_leftfront();
	go_rightfront();
	stop_leftback();
	go_rightback();
}

void goturnright()//右拐前进(修改版）
{
	go_leftfront();
	stop_rightfront();
	go_leftback();
	back_rightback();
}

void retreatleft()//左转后退
{

	stop_leftfront();
	back_rightfront();
	stop_leftback();
	back_rightback();
}


void retreatright()//右转后退
{

	back_leftfront();
	stop_rightfront();
	back_leftback();
	stop_rightback();
}

void stopleft()//原地左转
{
	back_leftfront();
	go_rightfront();
	back_leftback();
	go_rightback();
}

void stopright()//原地右转
{
	go_leftfront();
	back_rightfront();
	go_leftback();
	back_rightback();

}