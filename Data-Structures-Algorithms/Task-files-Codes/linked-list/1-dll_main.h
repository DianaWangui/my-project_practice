#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}; struct node;
struct node *head, *temp, *newnode, *tail;

#endif
