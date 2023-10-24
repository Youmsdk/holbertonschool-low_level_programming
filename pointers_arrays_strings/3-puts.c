#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts - that prints a string, followed by a new line, to stdout.
 *
 * @str: string to print
 */
void _puts(char *str)
{
	int aul = 0;
	while (*(str + aul) != '\0')
	{
		_putchar(str[aul]);
		aul++;
	}
		_putchar('\n');
}
