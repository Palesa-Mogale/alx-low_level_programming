#include "main.h"
/**
 * print_most_numbers - print excludes numbers 2 and 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if ((x == 50) || (x == 52))
		{
			continue;
		}
		_putchar(x);
	}
	_putchar(10);
}
