/*
 * main.c
 *
 *  Created on: Dec 14, 2020
 *      Author: radwan
 */

# include <stdio.h>

int main(void)
{
	float number1, number2, number3;
	float average;

	printf("Enter the first number: ");
	fflush(stdout);
	scanf("%f",&number1);
	printf("\nEnter the second number: ");
	scanf("%f",&number2);

	printf("\nEnter the third number: ");
	scanf("%f",&number3);

	average=(number1 + number2 + number3)/3;
	printf("\nThe average is: %f",average);

}
