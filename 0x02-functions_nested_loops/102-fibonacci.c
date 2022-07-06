#include <stdio.h>

/**
 * main - prints the sequence
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int _num = 1;
	int num_1 = 2;
	int new_num;
	int total = 50;

	printf("%d, %d, ", _num, num_1);
	for (n = 0; n < 50; n++)
	{
		new_num = _num + num_1;
		_num = num_1;
		num_1 = new_num;
		printf("%d", new_num);
		if (n != total - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
