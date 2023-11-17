#include "main.h"

int main(void)
{

	struct node *head = NULL;
	int choice;

	printf("Do you want to create a sll 1. Yes, 0. No\n");
	scanf("%d", &choice);

	create_sll(head, choice);

	return (0);
}

