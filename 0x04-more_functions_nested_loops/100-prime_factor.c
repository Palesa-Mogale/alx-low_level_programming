#include <stdio.h>
/**
 * main - prints the largest prime factor
 * of a number
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	int hash;

	while (hash++ < number / 2)
	{
		if (number % hash == 0)
		{
			number /= 2;
			continue;
		}
		for (hash = 3; hash < number / 2; hash += 2)
		{
			if (number % hash == 0)
				number /= hash;
		}
	}
	printf("%ld\n", number);
	return (0);
}
