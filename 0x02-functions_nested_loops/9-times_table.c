#include "main.h"
/**times_table - function that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, column, digit;

	for (row = 0; row <=9; raw++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (column = 1; column <= 9; column++)
		{
			digit = (row * column);
			if ((digit / 10) > 0)
			{
				_putchar(' ');
			}
			_putchar((digit % 10) + '0');
			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
