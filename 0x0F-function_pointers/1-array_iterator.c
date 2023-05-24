#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - prints each array elem on a new line
* @array: array to be printed
* @size: size of array elem to be printed
* @action: pointer to print the array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	return;
	for (i = 0; i < size; i++)
{
	action(array[i]);
}
}
