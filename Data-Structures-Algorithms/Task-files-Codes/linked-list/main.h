#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};

void my_linked_list(int choice);
void insert_beginning(); 

#endif
