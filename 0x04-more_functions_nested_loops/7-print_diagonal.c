#include "main.h"

/**
 * print_diagonal - prints lines
 * @n: argument
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			i++;
			j = 0;
			_putchar('\\');
			_putchar('\n');
		}
		
	}
}
