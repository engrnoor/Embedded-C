/*
 * pointer.c
 *
 *  Created on: Dec 14, 2020
 *      Author: radwan
 */

#include<stdio.h>

long long int g_data  = 0xFFFEABDC11112345;
int main (void)
{
	int *pAddress = (int*) &g_data;

	printf("value of pAddress %p\n", pAddress);
	printf("value at address %p is %x\n", pAddress, *pAddress);
	pAddress  = pAddress + 1;
	printf("value at address %p is %x\n", pAddress, *pAddress);
	pAddress  = pAddress + 1;
//	printf("value at address %p is %x\n", pAddress, *pAddress);
//	pAddress  = pAddress + 1;
//	printf("value at address %p is %x\n", pAddress, *pAddress);
//	pAddress  = pAddress + 1;
//	printf("value at address %p is %x\n", pAddress, *pAddress);
//	pAddress  = pAddress + 1;
//	printf("value at address %p is %x\n", pAddress, *pAddress);
//	pAddress  = pAddress + 1;
//	printf("value at address %p is %x\n", pAddress, *pAddress);
//	pAddress  = pAddress + 1;
//	printf("value at address %p is %x\n", pAddress, *pAddress);

}
