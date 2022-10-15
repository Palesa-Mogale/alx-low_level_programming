#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a
 * parameter on each element of array
 * @array: array to execute
 * @size: size of array
 * @action: pointer to the function to use
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
