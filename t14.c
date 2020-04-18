//To reverse link list

#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int value;
	struct st *next;
	struct st *pre;
}node;
void add_end(node **, int);
void print_list(node *);
void reverse_linklist(node **);

int main()
{
	node *head = NULL;
	int value = 0;
	int input = 0;
	while(1)
	{
		printf("\nEnter \n0 for exit\n1 for add integer number in link list\n2 for reverse link list\n3 for print link list\n:");
		scanf("%d",&input);
		switch(input)
		{
			case 0:
				return 0;
			case 1:
				printf("Enter a integer number : ");
				scanf("%d",&value);
				add_end(&head,value);
				break;
			case 2:
				reverse_linklist(&head);
				break;
			case 3 :
				print_list(head);
				break;
			default :
				printf("Invalid input\n");
		}
	}
	
	//return 0;
}

void add_end(node **head, int value)
{
	node *new = (node *)malloc(sizeof(node));
	if(new == NULL)
	{
		printf("Memory is not available \n");
		return;
	}
	new->value = value;
	new->next = NULL;
	node *current = *head;
	if(current != NULL)
	{
		while(current->next != NULL)
		{
			current = current->next;
		}
		new->pre = current;
		current->next = new;
	}
	else
	{
		new->pre = NULL;
		*head = new;
	}
}

void reverse_linklist(node **head)
{
	node *current = *head;
	node *temp_ptr = NULL;
	while(current != NULL)
	{
		if(current->next == NULL)	//to chnage head
		{
			*head = current;
		}
		
		//swap next and pre
		temp_ptr = current->next;
		current->next = current->pre;
		current->pre = temp_ptr;
		
		current = temp_ptr;	//or current = current->pre;	//increment current node
	}
}

void print_list(node *head)
{
	while(head != NULL)
	{
		printf("%d \t",head->value);
		head = head->next;
	}
	printf("\n");
}

