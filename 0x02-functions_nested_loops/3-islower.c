#include "main.h"

/**
 * _islower - checks for lower alpha
 * @c: argument of the function
 * Return: 1if true or 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
