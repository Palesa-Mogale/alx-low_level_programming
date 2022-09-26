#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: accepted byte
 * Return: number of accepted byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		cool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				cool = 0;
				break
			}
		}
		if (cool == 1)
			break;
	}
	return (i);
}
