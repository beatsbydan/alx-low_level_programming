#include "main.h"
#include <string.h>
/**
 * rev_string - reverses string
 * @s: string
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = strlen(s) - 1;
	int j = 0;
	char new;

	while (i > j)
	{
		new = s[i];
		s[i] = s[j];
		s[j] = new;
		i--;
		j++;
	}
}
