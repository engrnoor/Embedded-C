/*
 * main.c
 *
 *  Created on: Dec 6, 2020
 *      Author: ernoo
 */
#include <stdio.h>

float A1, A2, A3;
float Avg=0;

int main(void)
{
	printf("Enter first number:");
	fflush(stdout);    // only needed for Eclipse
	scanf("%f",&A1);
	printf("\nEnter second number:");
	fflush(stdout);
	scanf("%f",&A2);
	printf("\nEnter third number:");
	fflush(stdout);
	scanf("%f",&A3);

	Avg = (A1+A2+A3)/3;
	printf("\nThe average is %f", Avg);

	getchar();
	getchar();

}
