//How to declare pointer to array of 3 intergers 		Ans : "int (*p)[3]"


#include<stdio.h>
int main()
{
	int arr[3] = {5,10,15};
	int (*p)[3] = &arr;				//p is pointer to array of 3 integers 			p will store address of array of 3 integer
	int *q = arr;					//q is pointer to first element of integer arayy 	q wil store adrress of integer 

	printf("address of p = %p \n",p);
	printf("address of p+1 = %p \n",p+1);		//p will jump by 3*szeof(int) = 12 bytes
	
	printf("address of q = %p \n",q);
	printf("address of q+1 = %p \n",q+1);		//q will jump by sizeof(int) = 4 byte

}
