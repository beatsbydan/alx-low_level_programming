#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes to upper
 * @str: string
 * Return: 0
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ('a' - 'A');
		i++;
	}
	return (str);
}

