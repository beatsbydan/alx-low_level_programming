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
	int n = ((length) / 2);

	if (length % 2 != 0)
	{
		n = ((length - 1) / 2);
	}

	while (str[n] != 0)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
