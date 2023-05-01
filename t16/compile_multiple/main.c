#include<stdio.h>

void sum(int, int);
void sub(int, int);
void div(int, int);
void mul(int, int);

int main()
{
	int a = 0, b = 0;
	char op = 0;
	printf("Enter a and b respectively : \n");
	scanf("%d%d", &a, &b);
	printf("Enter operation from + - / * : \n");
	scanf(" %c", &op);
	printf("%d %c %d = ", a, op, b);
	switch(op)
	{
		case '+' :
			sum(a, b);
			break;;
		case '-' :
			sub(a, b);
			break;
		case '/' :
			div(a, b);
			break;
		case '*' :
			mul(a, b);
			break;
		default :
			printf("Invalid operation \n");
	}
	return 0;
}
