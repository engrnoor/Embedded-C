/*
 * main.c
 *
 *  Created on: Dec 6, 2020
 *      Author: ernoo
 */
#include <stdio.h>

double A1, A2, A3;
double Avg=0;

int main(void)
{
	printf("Enter 3 numbers:");
	scanf("%lf %lf %lf",&A1,&A2, &A3);

	Avg = (A1+A2+A3)/3;
	printf("\nThe average is %f", Avg);

	getchar();
	getchar();

}
