/*
 * main.c
 *
 *  Created on: Dec 2, 2020
 *      Author: radwan
 */

#include "math.h"
#include <stdio.h>
int main(void)
{

	printf("Add : %X \n", math_add(0x0FFF1111,0x0FFF1111));

	printf("Multiply :%lld\n", math_mul(0x0FFF1111,0x0FFF1111));

	printf("Div : %f \n", math_div(100,8));




	return 0;
}
