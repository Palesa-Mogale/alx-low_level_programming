#include <stdio>
#include "main.h"
/**
 * print_numbers - print numers, 0 till 9
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}

	_putchar('\n');
}
