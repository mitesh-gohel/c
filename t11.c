//To copy one string to another string
#include<stdio.h>
#include<stdlib.h>
int my_strlen(char *);
int main()
{
	char str1[51] = {0};
	char *str2 = NULL;
	int len = 0;
	printf("Enter string (maximum length is 50 characters) : ");
	scanf("%s",str1);
	
	len = my_strlen(str1);
	str2 = (char *)malloc(sizeof(char) * (len+1));
	if(NULL == str2)
	{
		printf("Memory is not available \n");
		return 0;
	}
	for(int i=0; i<len; ++i)
	{
		*(str2+i) = *(str1+i);
	}
	*(str2+len) = '\0';
	printf("string1 = %s \n",str1);
	printf("string2 = %s \n",str2);
	
	if(str2 != NULL)
	{
		free(str2);
	}
	
	return 0;
}

int my_strlen(char *str)
{
	int len = 0;
	
	while(*(str+len))
	{
		++len;
	}	
	return len; 
}
