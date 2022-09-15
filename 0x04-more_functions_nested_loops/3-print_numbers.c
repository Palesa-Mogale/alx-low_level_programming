#include "main.h"
/**
 * print_numbers - print numers, 0 till 9
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar(10);
}
