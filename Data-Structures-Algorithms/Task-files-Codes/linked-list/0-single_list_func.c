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
		printf("[%d]", temp -> data);
		temp = temp -> next;
	}
	printf("\n");
	/*printf("Count is: %d\n", count);*/
}

void insert_beginning(struct node *head)
{
	struct node *newnode;
	newnode = (struct node *) malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &newnode -> data);
	/* assising the next part of new node to the address of first node which is stored in head */
	newnode -> next = head;
	/* Now making giving head address of the new created node */
	head = newnode;

}

void insert_end(struct node *head)
{
	struct node *newnode, *temp;
	newnode = (struct node *) malloc(sizeof(struct node));

	/*Lets take data from user */
	printf("\nEnter the data: ");
	scanf("%d", &newnode -> data);

	/* Initializing the end nodes to 0 since last nodes points to NULL */
	newnode -> next = 0;
	temp = head;

	/* A while loop to traverse to the last node where we can insert our new node */
	while (temp -> next != 0)
	{
		temp = temp -> next;
	}
	/* now this will make the last node next to store the address of the new node pointed by (newnode*) */
	temp -> next = newnode;
}
