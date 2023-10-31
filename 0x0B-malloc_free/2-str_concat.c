#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - this function concatenates two strings.
 * @s1: string 1/2 to concat.
 * @s2: string 2/2 to concat.
 * Return: Pointer to concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int i, y, x;
	char *str;

	i = y = 0;
	if (s1 != NULL)
		for (i = 0; s1[i]; i++)
			;
	if (s2 != NULL)
		for (y = 0; s2[y]; y++)
			;

	str = malloc(sizeof(char) * (i + y + 1));
	if (str == NULL)
		return (NULL);

	x = 0;
	while (x < (i + y))
	{
		if (x < i)
			str[x] = s1[x];
		else
			str[x] = s2[x - i];

		x++;
	}
	str[x] = 0;

	return (str);
}
