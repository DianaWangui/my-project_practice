#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/* struct datatype for sll */
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};


/*Single linked list function prototype */
void create_sll(struct node *head, int choice);
void insert_beginning(struct node *head);
void insert_end(struct node *head);
void display(struct node *head);

/* Double linkd list function prototype */
void create_dll();
void display_dll();
void insert_end_dll();
void insert_beginning_dll();

#endif
