#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 8; num++)
	{
		putchar((num % 10) + '0');
		if (num == 8)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
