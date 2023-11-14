#include "main.h"

int main(void)
{
	int choice;
	printf("Enter your choice: ");
	scanf("%d", &choice);
	my_linked_list(choice);
	insert_beginning();

	return (0);
}

