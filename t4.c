//To learn that : when we initialize few elements of array, then other elements of array contains zero value
#include<stdio.h>
int main()
{
	int arr[7] = {5,13};	//only two elements initialize
	for(int i=0;i < (int)(sizeof(arr)/sizeof(int)); i++)
		printf("%d \n",*(arr+i));

	return 0;
}
