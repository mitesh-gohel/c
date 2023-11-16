//What will happen, if we don't include string.h and use strcpy() ?
#include<stdio.h>

int main()
{
	char name[10] = {0};
	strcpy(name, "Mitesh");
	printf("%s\n", name);
	return 0;
}

/*
Ans :
It will give warning (not give any error) that : implicit declaration of strcpy 
*/
