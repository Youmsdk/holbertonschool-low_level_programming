#include "math.h"
#include <string.h>
#include <stdio.h>
/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @n: the number to find the square root of
 * @b: the current index (starts at 0)
 *
 * Return: the square root of n if it exists, otherwise -1
 */
int sqrt2(int n, int b)
{
	if (b * b > n)
		return (-1);
	else if (b * b == n)
		return (b);
	else
		return (sqrt2(n, b + 1));

}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n if it exists, otherwise -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
