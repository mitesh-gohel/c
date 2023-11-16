//Implement cp command

#include<stdio.h>

int main(int argc, char **argv)
{
	FILE *src_fp=NULL, *dest_fp=NULL;
	char ch1=0;

	if(argc != 3)
	{
		printf("Invalid number of arguments\n");
		return 0;
	}

	src_fp = fopen(argv[1], "r");
	if(src_fp == NULL)
		return 0;
	dest_fp = fopen(argv[2], "w");
	if(dest_fp == NULL)
		return 0;

	while((ch1 = fgetc(src_fp)) != EOF )
	{
		fputc(ch1, dest_fp);
	}

	fclose(src_fp);
	fclose(dest_fp);
	return 0;
}
