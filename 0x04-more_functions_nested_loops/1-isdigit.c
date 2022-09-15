#include "main.h"
/**
 * _isdigit - checks if character is a digit
 * @x: number to be checked
 * Return: 1 if it is, 0 otherwise
 */
int _isdigit(int c) 
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
