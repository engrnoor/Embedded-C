/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>

int A1=0;
int A2=0;
int A3=0;
double Avg=0;

int main(void)
{
    /* Loop forever */
	scanf("%d",A1);
	scanf("%d",A2);
	scanf("%d",A3);

	Avg = (A1+A2+A3)/3;
	printf("The average is %d", Avg);
	for(;;);
}
