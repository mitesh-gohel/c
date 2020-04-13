//To understand that static and global variable can only initialize by constant value

#include<stdio.h>

int m = 70;	//valid
int n = m;	//Invalid

int main()
{
	static int x = 33;	//valid
	static int y = x;	//invalid
	int a = 5;	//valid
	int b = a;	//valid
	printf("m = %d \t n = %d \n",m,n);
	printf("x = %d \t y = %d \n",x,y);
	printf("a = %d \t b = %d \n",a,b);
	return 0;
}


