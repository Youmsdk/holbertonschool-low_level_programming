#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _pow_recursion - raised x to the power of y
 * @x: number integer
 * @y: power
 *
 * Return: on success 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));

}
