#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: array to be printed
 * @n: number of element to print
 */
void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < (n - 1); r++)
	{
		printf("%d, ", a[r]);
	}
		if (r == (n - 1))
		{
			printf(",%d", a[n - 1]);
		}

			printf("\n");
}
