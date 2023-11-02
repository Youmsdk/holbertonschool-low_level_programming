#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * is_prime_number2 - checks if a number is prime
 * @n: the number to check
 * @y: the current divisor to check (starts at n / 2)
 *
 * Return: 1 if n is a prime, otherwise 0
 */
int is_prime_number2(int n, int y)
{
	if (y == 1)
		return (1);
	else if (n % y == 0)
		return (0);
	else
		return (is_prime_number2(n, y - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is a prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (is_prime_number2(n, n / 2));
}
