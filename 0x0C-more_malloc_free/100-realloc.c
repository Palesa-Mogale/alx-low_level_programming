#include <stdlib.h>
#include "main.h"
/**
*_realloc - re-allocates a memory block
*@ptr: pointer to the memory previously allocated
*@old_size: size in bytes of the allocated ptr
*@new_size: size in bytes of new memory block
*Return: ptr
*if new_size equals old_size, return ptr
*if malloc fails, return NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
