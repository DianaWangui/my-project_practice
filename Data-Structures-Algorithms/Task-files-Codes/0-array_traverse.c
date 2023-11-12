#include <stdio.h>
/**
 * main- the main function that contains our array
 *Return 0 on success
 *
 * Description: This function is used to ask for user to enter
 * an array size, that is, number of elemts they want to store in the array
 * The array is initialized to 30, check my test file to learn more about 
 * the drawbacks of this.
 * Then the user is also prompted to enter the elements of the array
 * It used for loop to take user input for the element and to also display them
 *
 */
int main(void)
{
	/* Initialize max elements to store */
	int array[30];

	int size, i;

	/* User is prompted to enter array size*/
	printf("Enter the size of array: ");
	scanf("%d", &size);

	/* User prompted to enter elements and loops through each of them */
	printf("Enter the elements of the array: ");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}

	/* Printing out the array elements enetred by user */
	/* Used [] to store the elements in them to look like an array */
	printf("The elements of arrays are: [");
	for (i = 0; i < size - 1; i++)
	{
		printf("%d, ", array[i]);
	}
	if (size > 0)
	{
		printf("%d", array[size - 1]);
	}
	printf("]\n");
	return (0);
}
