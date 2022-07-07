#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i = 1;
	int j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		i++;
		_putchar('\n');
		j = 0;
	}
}
