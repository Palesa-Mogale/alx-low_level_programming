#include "main.h"
/**
 * swap_int - function that swaps two integer value
 * @a: integer 1
 * @b: integer 2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
