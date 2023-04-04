#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer
 * @b: pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a = *a - *b;
}
