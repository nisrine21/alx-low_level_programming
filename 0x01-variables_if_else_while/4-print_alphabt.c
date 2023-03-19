#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
char low, q, e;
q = 'q';
e = 'e';
for (low = 'a'; low <= 'z'; low++)
{
if (low != e && low != q)
putchar (low);
}
putchar ('\n');
return (0);
}
