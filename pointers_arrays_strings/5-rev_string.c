#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: Input string
 * return: string in reverse
 */
void rev_string(char *s)
{
	char rev = 0;
	int ydk = 0;
	int y;

	while (s[ydk] != '\0')
	ydk++;
	for (y = 0; y < ydk; y++)
	{
		ydk--;
		rev = s[y];
		s[y] = s[ydk];
		s[ydk] = rev;
	}
}
