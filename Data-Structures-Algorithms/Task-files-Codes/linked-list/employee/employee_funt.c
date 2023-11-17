#include "employee.h"

struct Employee* createEmployee(int id, const char *name, const char* position)
{
	struct Employee *newEmployee = (struct Employee *) malloc(sizeof(struct Employee));

	newEmployee -> id = id;
	strcpy(newEmployee -> name, name);
	strcpy(newEmployee -> position, position);
	newEmployee -> next = NULL;

	return newEmployee;
}

struct Employee* AddEmployee(struct Employee *head, int id, const char* name, const char* position)
{
	struct Employee *newEmployee;

	newEmployee = createEmployee(id, name, position);
	newEmployee -> next = head;

	return newEmployee;
}

void display(struct Employee *head)
{
	struct Employee *current = head;
	while (current != NULL)
	{
		printf("Employee ID: %d, Employee name: %s, Empoyee position: %s\n", current -> id, current -> name, current -> position);
		current = current -> next;
	}
}
