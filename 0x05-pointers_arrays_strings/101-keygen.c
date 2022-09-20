#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - generates keygen
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	int t;

	srand(time(0));
	while (t <= 2645)
	{
		c = rand() % 128;
		t += c;
		putchar(c);
	}
	putchar(2772 - t);

	return (0);
}
