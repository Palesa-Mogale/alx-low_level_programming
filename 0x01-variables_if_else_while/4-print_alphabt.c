#include <stdio>

/**
 * main - entry point
 *
 *Description: Prints the alphabet in lowercase, except q and e.
 
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (lettet != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
