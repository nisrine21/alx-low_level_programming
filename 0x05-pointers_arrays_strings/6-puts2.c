#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer
 * Return: 0
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
putchar(str[i]);
}
i++;
}
putchar('\n');
}
