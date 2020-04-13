//To use local static variable in other file

#include<stdio.h>

void fun2();	//fun2() is define in file t2b.c


int *ptr1 = NULL;

int *fun1()
{
	static int count;	//local static variable
	count++;
	printf("in fun1() count = %d \n",count);
	return &count;
}



int main()
{
	fun1();
	fun1();
	fun1();
	ptr1 = fun1();
	
	printf("in main() : %d \n ",*ptr1);
	
	fun2();
	
	fun1();
	
	return 0;
}
