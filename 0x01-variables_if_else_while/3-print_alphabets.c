#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
putchar (low);
for (low = 'A'; low <= 'Z'; low++)
putchar (low);
putchar ('\n');
return (0);
}
