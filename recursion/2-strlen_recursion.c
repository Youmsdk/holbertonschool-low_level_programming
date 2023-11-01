#include "main.h"
#include <string.h>
#include <stdio.h>
/*
 * _strlen_recursion - Returns the length of a string.
 * @s: string
 *
 * Return: lenght of a string
 * On error, -1 is returned, and errno is set appropriately
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1));

	}
	return (0);
}
