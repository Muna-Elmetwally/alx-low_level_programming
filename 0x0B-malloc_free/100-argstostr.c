#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - this function  concatenates all the arguments of your program.
 * @ac: args count.
 * @av: arguments
 * Return: pointer to string.
 */
char *argstostr(int ac, char **av)
{
	char *str, *temp;
	int i, x, length;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		for (x = 0; temp[x]; x++)
		{
			length++;
		}
		length += 1;
	}
	str = malloc(sizeof(char) * length + 1);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		for (x = 0; temp[x]; ++x)
		{
			str[length] = temp[x];
			length++;
		}
			str[length] = '\n';
			length++;
	}
	str[length] = '\0';
	return (str);
}
