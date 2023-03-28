#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _puts -  prints a string, followed by a new line, to stdout
 * @str: pointer
 * Return: void
 */

void _puts(char *str)
{
int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
