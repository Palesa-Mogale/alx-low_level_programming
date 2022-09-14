#include "main.h"
/**
 * print alphabet - print alphabet 10x in lowercase
 */
void print_alphabet(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
