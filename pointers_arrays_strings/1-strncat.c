#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenate strings, defining
 * the size of second string
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int y, d;

	y = 0;
	d = 0;

	while (*(dest + y) != '\0')
		y++;

	while (*(src + d) != '\0' && y < 97 && d < n)
	{
		*(dest + y) = *(src + d);
		y++;
		d++;
	}
	*(dest + y) = '\0';
	return (dest);
}
