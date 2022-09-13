#include "main.h"
/**
 * print_alphabet
 *
 * Return Always 0
 */
void print_alphabet(void)
{
	int c = 'a';

	while ( c <= 'z')
	{
		_putchar(alp);
		c++;
	}
	_putchar('\n');
}
