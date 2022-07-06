#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: argument
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		while (n >= 0)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
		while (n < 0)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
}

