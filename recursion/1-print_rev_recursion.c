#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s:string
 * Return: on sucess 1.
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		putchar(*s);
	}	_print_rev_recursion(s + 1);
}
