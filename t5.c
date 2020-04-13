//Write a program to implement list, which should has add to end function and print lsit function

#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int x;
	struct st *next;
}list;

void add_end(list **head_ptr);
void print_list(list *);

int main()
{
	list *head = NULL;
	int input = 0;
	do
	{
		printf("Enter 1 for add node \nEnter 2 for print node \nEnter 3 for exit \n : ");
		scanf("%d",&input);
		
		switch(input)
		{
			case 1:	
				add_end(&head);
				break;
			case 2:	
				print_list(head);
				break;
			case 3:
				break;
			default:
				printf("Invalid input \n");
		}
	}while(input != 3);
	
	return 0;
}

void add_end(list **head)
{
	list *new = (list *)malloc(sizeof(list));
	list *temp = NULL;

	printf("Enter number = ");
	scanf("%d",&new->x);
	new->next = NULL;
	
	if(*head == NULL)	//for 1st node
	{
		*head = new;
		printf("First node \n");
		return;
	}
	else
	{
		temp = *head;
		while(temp->next != NULL)
		{
			//printf("In while\n");
			temp = temp->next;
		}
		temp->next = new;
	}
}

void print_list(list *list_ptr)
{
	while(list_ptr != NULL)
	{
		printf("%d \t",list_ptr->x);
		list_ptr = list_ptr->next;
	}
	printf("\n");
}
