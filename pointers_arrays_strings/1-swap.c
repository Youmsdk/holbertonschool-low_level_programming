#include "main.h"
#include <stdio.h>

/**
 * swap_int - write a function that swaps the values of two integers
 * @a: a
 * @b: b
 * return: nothing
 */
void swap_int(int *a, int *b)
{
	int real;

	real = *a;
	*a = *b;
	*b = real;
}
