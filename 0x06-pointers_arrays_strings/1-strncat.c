#include "main.h"
#include <string.h>

/**
 * _strncat - copies a string
 * @dest: destination
 * @src: source
 * @n: argument
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
