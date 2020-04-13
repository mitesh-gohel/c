/*
To reverse words in string.
Ex.	i/p:"Hello How are you?"
	o/p:"olleH woH era ?uoy"
*/
#include<stdio.h>
int main()
{
	char str[100] = {0};
	int len=0, i=0, j=0, r1=0, r2=0;
	char temp = 0;
	printf("Enter a string : ");
	gets(str);
	
	for(len=0; *(str+len); ++len);
	
	for(i=0; i<len; ++i)
	{
		r1 = i;
		for( ; *(str+i)!=' ' && *(str+i)!='\0'; ++i);
		r2 = i-1;
		for(;r1<r2;++r1, --r2)
		{
			temp = *(str+r1);
			*(str+r1) = *(str+r2);
			*(str+r2) = temp;
		}
	}
	
	printf("Reverse string : %s \n",str);
	
	return 0;
}
