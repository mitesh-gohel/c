// To take date in dd-mmy-yyyy format from user
#include<stdio.h>

int main()
{
	int day=0, month=0, year=0;
	printf("Enter date in dd-mm-yyyy format\n");
	scanf("%d-%d-%d", &day, &month, &year);
	printf("%d-%d-%d\n", day, month, year);
	return 0;
}

/* 
Output :
mitesh@mitesh-IdeaPad-3i:~/mitesh_workspace/c$ ./a.out 
Enter date in dd-mm-yyyy format
19-08-1998
19-8-1998
mitesh@mitesh-IdeaPad-3i:~/mitesh_workspace/c$ ./a.out 
Enter date in dd-mm-yyyy format
19
19-0-0
mitesh@mitesh-IdeaPad-3i:~/mitesh_workspace/c$ ./a.out 
Enter date in dd-mm-yyyy format
19 8 1998
19-0-0
mitesh@mitesh-IdeaPad-3i:~/mitesh_workspace/c$
*/
