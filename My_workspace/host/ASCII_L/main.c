/*
 * main.c
 *
 *  Created on: Dec 14, 2020
 *      Author: radwan
 */


#include <stdio.h>
char c1, c2, c3, c4, c5, c6;

int main(void)
{
	printf("Enter 6 characters of your choice:");
//	scanf("%c %c %c %c %c %c",&c1, &c2, &c3, &c4, &c5, &c6);
	c1=getchar();
	getchar();
	c2=getchar();
	getchar();
	c3=getchar();
	getchar();
	c4=getchar();
	getchar();
	c5=getchar();
	getchar();
	c6=getchar();


//	Avg = (A1+A2+A3)/3;
	printf("\nASCII codes: %u,%u,%u,%u,%u,%u", c1, c2, c3, c4, c5, c6);

	getchar();
	getchar();

}
