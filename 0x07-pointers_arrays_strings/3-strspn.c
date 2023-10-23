#include "main.h"
/**
* _strspn - prints the consecutive caracters of s1 that are in s2.
* @s: source string
* @accept: searching string
*
* Return: new string.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int y, x;
for (x = 0; *(s + x); x++)
{
for (y = 0; *(accept + y); y++)
{
if (*(s + x) == *(accept + y))
break;
}
if (*(accept + y) == '\0')
break;
}
return (x);
}
