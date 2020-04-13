//local static variable can be used by other function by pointing it using its local pointer ?

#include<stdio.h>

int *fun1()
{
	static int count;	//local static variable
	count++;
	printf("in fun1() count = %d \n",count);
	return &count;
}

int main()
{
	int *p = NULL;		//local pointer

	fun1();
	fun1();
	p = fun1();

	printf("in main() : %d \n",*p);
	
	*p *= 10;	//multiply by 10
	
	fun1();

		
//	return 0;
}

/*
conclusion :
Yes.
local static variable can be used by other function by pointing it using its local pointer.
*/

