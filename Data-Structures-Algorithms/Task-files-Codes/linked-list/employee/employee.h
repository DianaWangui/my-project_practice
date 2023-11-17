#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
	int id;
	char name[30];
	char position[30];
	struct Employee *next;
	struct Employee *prev;
};

struct Employee* CreateEmployee(int id, const char* name, const char* position);
struct Employee* AddEmployee(struct Employee *head, int id, const char* name, const char* position);
void display(struct Employee *head);

#endif
