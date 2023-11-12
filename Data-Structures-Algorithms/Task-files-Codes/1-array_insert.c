#include <stdio.h>
/**
 *
 *
 */
int main(void)
{
	int array[30];
	int size, position, i, element;

	printf("Enter the size of the array: ");
	scanf("%d", &size);
	printf("Enter the elements of the array: ");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("The element in the array are [");
	for ( i = 0; i < size - 1; i++)
	{
		printf("%d, ",array[i]);
	}
	if (size > 0)
	{
		printf("%d", array[size - 1]);
	}
	printf("]\n");

	/* Inserting an element at a position inside the array */
	printf("Enter the element you want to insert");
	scanf("%d", &element);
	printf("Enter the position you want to insert the element");
	scanf("%d", &position);
	if (position > size + 1)
		printf("The position is invalid");
	else
	{
		for (i = size - 1; i > position - 1; i--)
		{
			array[i + 1] = array[i];
		}
		array[position - 1] = element;
		size++;
	}
	printf("The element in the array now are [");
	for (i = 0; i < size - 1; i++)
	{
		printf("%d, ", array[i]);
	}
	if (size > 0)
		printf("%d", array[size - 1]);

	printf("]\n");
	return (0);
}
