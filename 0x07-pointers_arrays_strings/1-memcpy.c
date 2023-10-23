#include "main.h"
/**
* _memcpyy - fills memory with a constant byte.
* @dest: source string
* @src: the contant byte for filling
* @n: lenght of buffer
* Return: new string.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
