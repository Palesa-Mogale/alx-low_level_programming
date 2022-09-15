#include "main.h"
/**times_table - function that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num, row, colm;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (row = 1; row <= 9; row++)
		{
			_putchar(',');
			_putchar(' ');

			colm = num * row;
			if (colm <= 9)
				_putchar(' ');
			else
				_putchar((colm / 10) + '0');
			_putchar((colm % 10) + '0');
		}
		putchar('\n');
	}
}

