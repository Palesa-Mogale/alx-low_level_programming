#include "main.h"
/**
 * print_numbers - print numbers  0 up to 9
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		_putchar(x);
	}
	_putchar(10);
}
