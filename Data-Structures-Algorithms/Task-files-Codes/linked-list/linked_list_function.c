#include "main.h"

void my_linked_list(int choice)
{
	struct node *head, *newnode, *temp;
	head = 0;
	/*int count = 0; */
	while (choice)
	{
		newnode = (struct node *) malloc(sizeof(struct node));
		printf("\nEnter the data: ");
		scanf("%d", &newnode -> data);
		newnode -> next = 0;
		if (head == NULL)
		{
			head = temp = newnode;
		}
		else
		{
			temp -> next = newnode;
			temp = newnode;
		}
		printf("\nDo you want to enter another node: ");
		scanf("%d", &choice);
	}
	temp = head;
	while (temp != 0)
	{
		printf("%d\n", temp -> data);
		temp = temp -> next;
	}
	/*printf("Count is: %d\n", count);*/
}
