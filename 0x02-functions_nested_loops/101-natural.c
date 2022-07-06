#include <stdio.h>

/**
 * main - prints sum
 *
 * Return: 0
 */
int main(void)
{
	int _num;
	int _sum;

	for (_num = 0; _num <= 1024; _num++)
	{
		if (_num % 3 == 0 || _num % 5 == 0)
		{
			_sum += _num;
		}
	}
	printf("%d", _sum);
	printf("\n");
	return (0);
}
