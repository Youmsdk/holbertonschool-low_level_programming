#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j, k;

	j = 0;

	while (src[j] != '\0')
	{
		j++;
	}
	for (k = 0; k < j; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);
}
