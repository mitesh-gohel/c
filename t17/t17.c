//To implement cp command
#include<stdio.h>
int main(int argc,char **argv)
{
	if(argc != 3)
	{
		printf("Invalid number of argument \n");
		return 1;
	}
	char *src_file = *(argv+1);
	char *target_file = *(argv+2);
	char ch1 = 0, ch2 = 0;
	
	FILE *fp_1 = fopen(src_file, "r");
	FILE *fp_2 = fopen(target_file, "w");

	ch1 = fgetc(fp_1);
	while(ch1 != EOF)
	{
		if(ch1 != fputc(ch1, fp_2))
		{
			perror(" : failed in fputc \n");
		}
		ch1 = fgetc(fp_1);
	}

	fclose(fp_1);
	fclose(fp_2);
	
	return 0;
}
