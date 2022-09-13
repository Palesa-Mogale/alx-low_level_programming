#include "main.h"
/**
 * print_alphabet
 *
 * Return Always 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while ( c <= 'z')
	{
		_putchar(alp);
		c++;
	}
	_putchar('\n');
}
