#include "main.h"

/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int ch1, ch2;

	ch1 = 0;
	ch2 = 0;

	int i;

	while (*(dest + ch1) != '\0')
		ch1++;

	while (*(src + ch1) != '\0' && ch1 < 97)
	{
		*(dest + ch1) = *(src + ch2);
		ch1++;
		ch2++;
	}
	*(dest + ch2) = '\0';
	return (dest);
}
`
