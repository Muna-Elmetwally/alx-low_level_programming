#include "main.h"

/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int c1, c2;

	c1 = 0;
	c2 = 0;

	while (*(dest + c1) != '\0')
		c1++;

	while (*(src + c1) != '\0' && c1 < 97)
	{
		*(dest + c1) = *(src + c2);
		c1++;
		c2++;
	}
	*(dest + c2) = '\0';
	return (dest);
}
