#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
    int leng1, leng2;

    leng1 = 0;
    leng2 = 0;

    while (*(dest + leng1) != '\0')
        lengthD++;

    while (*(src + leng1) != '\0' && leng1 < 97)
    {
        *(dest + leng1) = *(src + leng2);
        leng1++;
        leng2++;
    }
    *(dest + length2) = '\0';
    return (dest);
}
