#include "main.h"
#include <string.h>

/**
 * puts_half - puts half
 * @str: string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int length = strlen(str);
	int n = ((length) / 2);

	if (length % 2 != 0)
	{
		n = ((length - 1) / 2);
	}
	while (str[i] != 0)
	{
		for (n; n > i; n++)
		{
			_putchar(str[i]);
		}
	}
	i++;
	_putchar('\n');
}
