//To implement my_strstr()
//char *my_str_str(char *haystack, char *needle)
//It finds needle in haystack, It doesn't compare '\0'
//if length of  needle is 0 then it returns starting address of haystack

#include<stdio.h>

char *my_strstr(char *haystack, char *needle);

int main()
{
	char str1[100] = {0}, str2[100] = {0};
	char *ans = NULL;
	printf("Enter haystck : ");
	scanf("%s", str1);
	printf("Enter needle : ");
	scanf("%s", str2);

	ans = my_strstr(str1, str2);
	if(ans == NULL)
		printf("Ans is NULL\n");
	else
		printf("Ans is : %s\n", ans);
	
	return 0;
}


char *my_strstr(char *haystack, char *needle)
{
	int i=0, j=0;
	int l_p=0, l_q=0; //length of haystack and needle
	
	for(l_p=0; haystack[l_p] ; ++l_p);
	for(l_q=0; needle[l_q] ; ++l_q);

	if(l_q == 0)
		return haystack;
	
	for(i=0; i<(l_p - l_q + 1); ++i)
	{
		for(j=0; j<l_q; ++j)
		{
			if(haystack[i+j] != needle[j])
				break;
		}
		if(j == l_q)
			return haystack + i;
	}
	return NULL;
}

