#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_rev - print a string in reverse, followed by a new line
 *@s: string
 *Return : nothing
 */
void print_rev(char *s);
{
	int o, r, len;

	o = 0;

	while (s[o] != '\0')
	{
		o++;

	}

	len = o;

	for (r = len - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}

	_putchar('\n');
}
