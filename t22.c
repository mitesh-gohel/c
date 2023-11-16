//Initializing string

#include<stdio.h>

int main()
{
	char str1[]  = "Hello, How are you ?";
	char *str2  = "I am fine";
	int i=0;

	printf("%s\n", str1);
	for(i=0; str1[i] ; ++i)
	{
		if(str1[i] >= 65 && str1[i] <=90)
			str1[i] += 32;
	}
	printf("%s\n", str1);

	/*Below code will give segmentation fault*/
	printf("%s\n", str2);
	for(i=0; str2[i] ; ++i)
	{
		if(str2[i] >= 65 && str2[i] <=90)
			str2[i] += 32;
	}
	printf("%s\n", str2);

	return 0;
}
