#include "main.h"

/**
 * print_times_table - prints time table
 * @n: argument
 * Return: time table
 */
void print_times_table(int n)
{
	int r;
	int c;
	int v;

	for (r = 0; r <= n; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		for (c = 1; c <= n; c++)
		{
			v = (r * c);
			if ((v / 10) > 0)
			{
				_putchar((v / 10) + '0');
			}
			else if ((v / 10) > 100)
			{
				_putchar((v / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((v % 10) + '0');

			if (c < n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	if (n < 0 || n > 15)
		return;
}
