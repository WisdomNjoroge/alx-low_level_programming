#include "main.h"
/**
 * print_line - prints straight line on the terminal
 * @n: parameter for the number of times the '_' will be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
