#include "main.h"

/**
 * print_most_numbers - prints most numbers
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
