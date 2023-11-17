#include "employee.h"

int main(void)
{
	struct Employee *employeeList = NULL;

	int id;
	char name[30];
	char position[30];
	int numberOfEmployees;
	int i;

	printf("Emter the number of employes: ");
	scanf("%d", &numberOfEmployees);

	for (i = 0; i < numberOfEmployees; ++i)
	{
		printf("Enter the details of employee %d\n", i + 1);
		printf("ID: ");
		scanf("%d", &id);
		printf("Name: ");
		scanf("%s", name);
		printf("Position: ");
		scanf("%s", position);

		employeeList = AddEmployee(employeeList, id, name, position);

	}
	printf("Employee List is: \n");
	display((struct Employee *)employeeList);

	free((struct Employee *)employeeList);

	return (0);
}
