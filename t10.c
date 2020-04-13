//To implement user define pow() function

#include<stdio.h>

int my_pow(int x, int y);

int main()
{
	int x=0, y=0, ans=0;
	printf("For x^y enter x and y respectivly :");
	scanf("%d%d",&x,&y);
	
	ans = my_pow(x,y);
	printf("x^y = %d",ans);
	
	return 0;
}

int my_pow(int x, int y)
{
	int ans = 1;
	for(int i=0; i<y; ++i)
	{
		ans *= x;
	}
	return ans;
}
