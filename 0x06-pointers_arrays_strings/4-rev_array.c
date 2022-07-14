#include "main.h"

/**
 * reverse_array - reverses array
 * @a: array
 * @n: elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int new_arr;
	int j;

	for (i = 0; i < (n / 2); i++)
	{
		j = n - i - 1 ;
		new_arr = a[i];
		a[i] = a[j];
		a[j] = new_arr;
	}
}
