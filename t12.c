//Convert String to float

#include<stdio.h>
int main()
{
	char str[10] = {0};
	float ans = 0.0;
	int i=0;
	float divisor = 10.0;
	printf("Enter number in float = ");
	scanf("%s",str);

	i = 0;	
	while((*(str+i) != '.') && (*(str+i) != '\0'))
	{
		ans *= 10;
		ans += (*(str+i) - '0');
		printf("in while : %f \n",ans);
		++i;
	}
	if(*(str+i) == '.')
	{
		++i;
		while(*(str+i))
		{
			ans = ( (*(str+i) - '0')/divisor ) + ans;
			divisor *= 10;
			++i;
		}
	}	
	printf("Float number = %f \n",ans);

	return 0;
}
