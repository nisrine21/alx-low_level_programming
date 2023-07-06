#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned
 * @index: index
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	a = 1UL << index;
	bit_value = (n & a) ? 1 : 0;

	return (bit_value);
}

