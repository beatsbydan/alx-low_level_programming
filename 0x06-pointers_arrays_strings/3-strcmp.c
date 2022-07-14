#include "main.h"
#include <string.h>

/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int reti = strcmp(s1, s2);
	int a = -15;
	int b = 15;
	int c = 0;

	if (reti < 0)
	{
		return (a);
	}
	else if (reti > 0)
	{
		return (b);
	}
	else
	{
		return (c);
	}
	return (0);
}
