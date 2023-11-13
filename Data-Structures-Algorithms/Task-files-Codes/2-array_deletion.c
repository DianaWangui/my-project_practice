#include <stdio.h>
int main(void)
{
	int array[20];
	int size, i, position;

	printf("Enter the size of the array, not more than 20: ");
	scanf("%d", &size);
	printf("\nEnter the elements in the array: ");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}

	/* Delelting elements in a position chosen by user */
	printf("\nEnter the position you want to delete the element: ");
	scanf("%d", &position);

	/* Checkinf if position is greater than array or negative */
	if (position > size || position < 0)
	{
		printf("Position out of bound");
	}
	else
	{
		for (i = position - 1; i < size - 1; i++)
		{
			array[i] = array[i + 1];
		}
		size--;
	}
	/* Printing new array after deleting element */
	printf("\nNew array is [");
	for ( i = 0; i < size - 1; i++)
	{
		printf("%d ,", array[i]);
	}
	if (size > 0)
	{
		printf("%d", array[size - 1]);
	}
	printf("]\n");

	return (0);
}
