#include "main.h"
/**
 * print_square - prints square
 * @size: parameter
 * Return: nothing
 */
void print_square(size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}

			putchar('\n');
		}
	}
}
