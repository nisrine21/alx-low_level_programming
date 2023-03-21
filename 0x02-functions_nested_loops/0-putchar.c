#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/**
 * main - main block
 * Description: prints _putchar, followed by a new line.
 * Return: 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
