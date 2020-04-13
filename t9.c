//To find binary of given number

#include<stdio.h>

int main()
{
	int i = 0,x = 0;
	int num = 0;
	printf("Enter a number : ");
	scanf("%d",&num);

	printf("Binary = ");
	for(i=31;i>=0;--i)
	{
		x = 1 << i;
		if((num & x) != 0)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	return 0;
}

