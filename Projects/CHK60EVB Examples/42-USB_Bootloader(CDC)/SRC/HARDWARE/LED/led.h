/***********************************************************************************************
 CHKD�ڲ����԰汾V0.1
 2012.12.3
************************************************************************************************/
#ifndef __LED_H__
#define __LED_H__
#include "gpio.h"

//LEDͷ�ļ�
//IO ��
#define LED0_PORT PTD
#define LED1_PORT PTD
#define LED2_PORT PTC
#define LED3_PORT PTD
//����
#define LED0_PIN  7
#define LED1_PIN  0
#define LED2_PIN  18
#define LED3_PIN  1
//λ��
#define LED0      PDout(LED0_PIN) 
#define LED1      PDout(LED1_PIN) 
#define LED2      PCout(LED2_PIN) 
#define LED3      PDout(LED3_PIN) 


void LED_Init(void);
#endif