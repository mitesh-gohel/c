//To learn difference between "arr" and "&arr", if arr[] is array

#include<stdio.h>
int main()
{
	int arr[7] = {0};

	printf("size of array = %ld \n",sizeof(arr));	//7 * sizeof(int) = 28 byte
	printf("address of array arr = %p \n",arr);	
	printf("arr+1 = %p \n", arr+1);			//increment by single element of array, 	means increment by sizef(int) = 4 byte
	printf("&arr+1 = %p \n",&arr+1);		//increment by size of array, 			means increment by 28 byte
	
	return 0;
}
