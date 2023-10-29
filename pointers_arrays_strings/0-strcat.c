#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int diakH, diakS;

	diakH = 0;
	diakS = 0;

	while (*(dest + diakH) != '\0')
		diakH++;

	while (*(src + diakS) != '\0' && diakH < 97)
	{
		*(dest + diakH) = *(src + diakS);
		diakH++;
		diakS++;
	}
	*(dest + diakH) = '\0';
	return (dest);
}
