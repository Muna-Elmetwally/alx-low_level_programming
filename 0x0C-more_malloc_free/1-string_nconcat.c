#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * string_nconcat - ...
  * @s1: ...
  * @s2: ...
  * @n: ...
  *
  * Return: ...
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, i = 0, c = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[c])
		c++;

	if (n >= c)
		l = a + c;
	else
		l = a + n;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	while (i < l)
	{
		if (i <= a)
			str[i] = s1[i];

		if (i >= a)
		{
			str[i] = s2[c];
			c++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
