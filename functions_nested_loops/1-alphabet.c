#include "main.h"

/**
 * main - check the code holberton school students.
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char print_alphabet;

	for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
	{
		putchar(print_alphabet);
	}
putchar('\n');
}
