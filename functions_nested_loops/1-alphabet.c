#include <stdio.h>

/**
 * print_alphabet - function to print alphabet in lowercase,
 * Return: 0
 */

void print_alphabet(void)
{
	 char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	 putchar('\n');
}
