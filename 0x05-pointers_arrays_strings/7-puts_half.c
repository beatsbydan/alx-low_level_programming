#include "main.h"
#include <string.h>

/**
 * puts_half - puts half
 * @str: string
 * Return: nothing
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int n;

	if ((length % 2 == 0))
	{
		for ((n = ((length) / 2)); n <= length; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for ((n = ((length - 1) / 2)); n <= length; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
