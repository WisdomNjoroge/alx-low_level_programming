#include "main.h"
#include <stdio.h>
/**
 * main - prints the largest prime factor 612852475143
 * Return: void
 */
int main(void)
{
	long prime =  612852475143, divisor;

	while (divisor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
		}
		for (divisor = 3; divisor < (prime / 2); divisor += 2)
		{
			if ((prime % divisor) == 0)
				prime /= divisor;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
