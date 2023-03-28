#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: int type array pointer
 * @b: int type integer
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 * You can only use _putchar to print.
 */

void print_array(int *a, int b)
{
	int i;

	i = 0;
	for (b--; b >= 0; b--, i++)
	{
		printf("%d", a[i]);
		if (b > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}
