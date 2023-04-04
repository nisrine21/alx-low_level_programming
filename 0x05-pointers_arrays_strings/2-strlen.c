#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _strlen - returns the length of a string.
 * @s: pointer
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
