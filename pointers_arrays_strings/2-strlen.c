#include <string.h>
#include <stdio.h>
#include "main.h"

/**
* _strlen - returns the length of a string
* @s: string
* Return: length
*/

int _strlen(char *s)
{
	int sib = 0;

	while (*(s + sib) != '\0')
	{

		sib++;
	}

	return (sib);
}
