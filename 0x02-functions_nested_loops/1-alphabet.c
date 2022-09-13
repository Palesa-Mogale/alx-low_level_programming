#include "main.h"
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	_putchar('\n');
}
