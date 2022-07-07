#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - scans for upper and lower case letters
 * @c: argument
 * Return: 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
