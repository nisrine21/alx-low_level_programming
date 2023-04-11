#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated with.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer to the newly allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, i, ci;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0, ci = 0; i < (len1 + len2); i++)
	{
		if (i < len1)
			concat_str[i] = s1[i];
		else
			concat_str[i] = s2[ci++];
	}

	concat_str[i] = '\0';

	return (concat_str);
}
