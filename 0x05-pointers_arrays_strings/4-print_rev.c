#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: to be printed in reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		for (i = i - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
		i++;
	}
	_putchar('\n');
}
