#include<stdio.h>

extern int *ptr1;

void fun2()
{
	printf("In other file, in fun2() : %d \n",*ptr1);
	*ptr1 *= 20;	//multiply by 20
}
