#include <stdlib>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
 	char letter;

	for (l = 'a'; l <= 'z'; letter++)
	for (l = 'A'; l <= 'Z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}	
