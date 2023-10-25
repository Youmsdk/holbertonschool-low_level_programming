#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function to print alphabet in lowercase,
 * Return: 0
 */

void print_alphabet(void)
{
	int f;

	for (f = 'a'; f <= 'z'; f++)
		putchar(f);
	 putchar('\n');
}
