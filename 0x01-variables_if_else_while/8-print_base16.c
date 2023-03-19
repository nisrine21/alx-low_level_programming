#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
int d;
char ch;
for (d = '0'; d <= '9'; ch++)
{
putchar(d + '0');
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
