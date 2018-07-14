#ifndef __LED_H
#define __LED_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK战舰STM32开发板
//LED驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2012/9/2
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 

#define  LED1  PAout(8)
#define  LED2  PAout(9)
#define  LED3  PAout(10)
#define  LED4  PAout(11)

#define no_dot 0
#define dot  1

void LED_Init(void);//初始化
void yima(int a,int i);//译码
void clear(void);//清除
void display(float m);//显示
void show_time(float m);//时间显示

		 				    
#endif



