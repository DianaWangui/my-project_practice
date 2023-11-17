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

	for (i = 0; i < numberOfEmployees; i++)
	{
		printf("Enter the details of employee %d", i);
		printf("ID\n: ");
		scanf("%d", &id);
		printf("Name\n: ");
		scanf("%[^\n]%*s", name);
		printf("Position\n: ");
		scanf("%[^\n]%*s", position);

		employeeList = AddEmployee(employeeList, id, name, position);

	}
	printf("Employee List is: \n");
	display((struct Employee *)employeeList);

	free((struct Employee *)employeeList);

	return (0);
}
