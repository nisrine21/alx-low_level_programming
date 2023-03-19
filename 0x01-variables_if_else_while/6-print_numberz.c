#include <stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
int d;
for (d = 0; d < 10; d++)
putchar (d + '0');
putchar ('\n');
return (0);
}
