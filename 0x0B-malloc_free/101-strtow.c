#include "main.h"
#include <stdlib.h>
/**
* **strtow - function that splits a string into words.
* @str : pointer
* Return: Char
*/

char **strtow(char *str)
{
	char **c;
	int i;
	int t = 0;
	int con = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] !