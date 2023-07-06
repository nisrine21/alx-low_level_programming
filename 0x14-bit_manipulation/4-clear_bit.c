#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer
 * @index: index
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	a = ~(1UL << index);
	*n &= a;

	return (1);
}
