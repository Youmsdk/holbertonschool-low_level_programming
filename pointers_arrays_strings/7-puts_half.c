#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of string,followed by new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int leng, il, ng;

	leng = 0;

	while (str[leng] != '\0')
	{
		leng++;
	}

	if (leng % 2 == 0)
	{
		for (ng = leng / 2; str[ng] != '\0'; ng++)
		{
			_putchar(str[ng]);
		}
	} else if (leng % 2)
	{
		for (il = (leng - 1) / 2; il < leng - 1; il++)
		{
			_putchar(str[il + 1]);
		}
	}
	_putchar('\n');
}
