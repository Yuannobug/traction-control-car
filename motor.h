#ifndef __motor_H_
#define __motor_H_

#include <REGX52.H>

void go_leftfront();//左前轮前进
void back_leftfront();//左前轮后退
void stop_leftfront();//左前轮停止

void go_rightfront();//右前轮前进
void back_rightfront();//右前轮后退
void stop_rightfront();//右前轮停止

void go_leftback();//左后轮前进
void back_leftback();//左后轮后退
void stop_leftback();//左后轮停止

void go_rightback();//右后轮前进
void back_rightback();//右后轮后退
void stop_rightback();//右后轮停止

void goforward();//前进
void retreat();//后退
void stop();//停止
void goturnleft();//左拐前进
void goturnright();//右拐前进
void retreatleft();//左转后退
void retreatright();//右转后退
void stopleft();//原地左转
void stopright();//原地右转




#endif