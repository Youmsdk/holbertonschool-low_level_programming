#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts - that prints a string, followed by a new line, to stdout.
 *
 * @str: pointer to the string to print
 * Return : nothing
 */
void _puts(char *str)
{
	int aul = 0;

	for (aul = 0; str[aul] != '\0'; aul++)
	{
		_putchar(str[aul]);
	}
		_putchar('\n');
}
