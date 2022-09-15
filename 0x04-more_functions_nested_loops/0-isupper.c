#include "main.h"
/**
 * _isupper - checks if a letter is uppercase
 * @c: letter to be checked
 * Return: 1 whether it is, 0 otherwise
 */
int _isupper(int c)
{
	for ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
