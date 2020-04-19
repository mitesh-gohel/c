//To implement user define pow() function

#include<stdio.h>

int my_pow(int x, int y);

int main()
{
	int x=0, y=0, ans=0;
	printf("For x^y enter x and y respectivly :");
	scanf("%d%d",&x,&y);
	if(y<0)
	{
		printf("y should not be nagative \n");
		return 0;
	}	
	ans = my_pow(x,y);
	printf("x^y = %d \n",ans);
	
	return 0;
}

int my_pow(int x, int y)
{
	int ans = 1;
	if(x==0)
		return 0;
	for(int i=0; i<y; ++i)
	{
		ans *= x;
	}
	return ans;
}
