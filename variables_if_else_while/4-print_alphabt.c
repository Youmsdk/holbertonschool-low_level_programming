#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (lettre = 'a'; l <= 'z'; letter++)
	for (lettre = 'A'; l <= 'Z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');
	return (0);
}

