#include "main.h"
#include <stdlib.h>

/**
 * print_times_table - prints for a given number
 * @n: argument
 * Return: times table
 */
void print_times_table(int n)
{
	int r;
	int c;
	int d;

	for (r = 0; r <= n; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= n; c++)
		{
			d = (r * c);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (c < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	if (n > 15 || n < 0)
	{
		exit(EXIT_FAILURE);
	}
}
