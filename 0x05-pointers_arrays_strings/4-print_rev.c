#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}

	putchar('\n');

}
