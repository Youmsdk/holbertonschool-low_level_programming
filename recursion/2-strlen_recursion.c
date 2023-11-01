#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strlen_recursion - Returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));

	}
	return (0);
}
