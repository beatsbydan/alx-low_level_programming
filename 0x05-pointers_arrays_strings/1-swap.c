#include "main.h"

/**
 * swap_int - swaps integers
 * @*a: pointer a
 * @a: int a
 * @*b: pointer b
 * @b: int b
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
