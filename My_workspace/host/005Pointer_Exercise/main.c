/*
 * main.c
 *
 *  Created on: Dec 14, 2020
 *      Author: radwan
 */
#include <stdio.h>

int main(void)
{
	char var1 = 100;
	printf("Value of data is : %d \n", var1);
	printf("the address is %p", &var1);
 // a good practice is to name the pointer variable to start with p
	char* pAddress1 = (char*) &var1; // & gives the pointer of the data
	printf("\nthe address is %p", pAddress1);
	fflush(stdout);
	char data = *pAddress1;
	printf("\nthe stored data is: %d", data);
	fflush(stdout);

	*pAddress1 = 65;
	printf("\nthe updated value is: %d", var1);


}
