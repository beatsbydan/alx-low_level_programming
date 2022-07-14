#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates
 * @dest: string 1
 * @src: string 2
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
	_putchar('\n');
}
