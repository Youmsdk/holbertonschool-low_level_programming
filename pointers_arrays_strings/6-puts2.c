#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character followed by new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int go, yd;

	go = 0;
	while (str[go] != '\0')
	{
		go++;
	}

	for (yd = 0; yd < go; yd += 2)
	{
		_putchar(str[yd]);
	}

	_putchar('\n');
}
