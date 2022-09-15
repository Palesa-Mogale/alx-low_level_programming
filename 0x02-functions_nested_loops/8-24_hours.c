#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day
 * n from 00:00 to 23:50, min loop counts mins, while hour loop counts hours
 * and resets minutes
 * Return: Always 0
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
