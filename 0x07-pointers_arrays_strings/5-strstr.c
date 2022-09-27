#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: entire string
 * @needle: substring to be located
 * Return: if substring is located - poiter to the beginning
 * if the substring is not located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	
	while (*hystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}

