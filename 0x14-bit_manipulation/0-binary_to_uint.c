#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
if (b == NULL) {
return (0);
}
unsigned int i = 0;
unsigned int res = 0;

while (b[i] != '\0')
{
if (b[i] == '0' || b[i] == '1') {
res = res * 2 + (b[i] - '0');
i++;
}
else
{
return (0);
}
}
return (res);
}

