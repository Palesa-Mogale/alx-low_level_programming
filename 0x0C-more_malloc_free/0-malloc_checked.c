#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: amount of bytes
 * Return: pointer to allocated memory
 * if mallock fails, status value is 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
