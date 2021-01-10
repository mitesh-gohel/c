//To learn difference between string literal and string

#include<stdio.h>
void do_capital();	//To capital string

int main()
{
	char name[20] = {'M', 'i', 't', 'e', 's', 'h', '\0'};	//string
	char full_name[20] = "Mitesh K Gohel";			//string
	char *surname = "Gohel";				//string literal

	printf("%s \n", name);
	printf("%s \n", full_name);
	printf("%s \n", surname);
	
	//doing capital string
	do_capital(name);
	do_capital(full_name);
	//do_capital(surname);		#if you uncomment this, then it will give Segmentation fault	

	printf("%s \n", name);
	printf("%s \n", full_name);
	printf("%s \n", surname);
}

void do_capital(char *str)
{
	int i = 0;
	for(i=0; str[i]; ++i)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}

}

/*
Concusion :
We can modify string, But string literal is read-only
string stores in stack or data segment
string literal stores in code segment, which is read-only

String Literal, also known as a string constant or constant string
*/
