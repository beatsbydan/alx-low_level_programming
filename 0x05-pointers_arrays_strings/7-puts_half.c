#include "main.h"
#include <string.h>

/**
 * puts_half - puts half of the string
 * @str: string to be cut in half
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int length = strlen(str);
	int n;

	if (length % 2 == 0)
	{
		n = (length / 2);
		while (i < length)
		{
			if (i >= n)
			{
				_putchar(str[i]);
			}
			i++;
		}
	}
	else
	{
		n = ((length - 1) / 2);
		while (i < length)
		{
			if (i > n)
			{
				_putchar(str[i]);
			}
			i++;
		}
	}
	_putchar('\n');
}
