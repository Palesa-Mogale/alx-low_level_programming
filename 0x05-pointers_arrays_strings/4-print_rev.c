#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - printing a string in reverse
 * @s: string to be printed in rev
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = strlen (s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
