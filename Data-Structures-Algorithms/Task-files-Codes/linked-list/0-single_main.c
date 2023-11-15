#include "main.h"

int main(void)
{
	struct node *head = NULL;
	int choice;
	printf("Enter your choice: ");
	scanf("%d", &choice);
	my_linked_list(choice);
	insert_beginning(head);
	insert_end(head);

	return (0);
}

