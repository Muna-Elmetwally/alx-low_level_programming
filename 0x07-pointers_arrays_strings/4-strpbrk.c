#include "main.h"
#include <stdio.h>
/**
* _strpbrk - prints the consecutive caracters of s1 that are in s2.
* @s: source string
* @accept: searching string
* Return: new string.
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (y = 0; *(s + y); y++)
{
for (x = 0; *(accept + x); x++)
{
if (*(s + y) == *(accept + x))
{
break;
}
}
if (*(accept + x) != '\0')
{
return (s + y);
}
}
return (0);
}
