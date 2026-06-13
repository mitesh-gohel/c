//To check : declaration of variable in switch case

#include<stdio.h>

int main()
{
	int op=0;
	op = 3;
	switch(op)
	{
		case 1 :
			printf("1\n");
			break;
		case 3 :
			{
			int a,b;
			a = 5;
			b = 10;
			printf("%d\n", a+b);
			printf("3\n");
			}
			break; 
		default :
			printf("Not found\n");
	}
	printf("End\n");
	return 0;
}
