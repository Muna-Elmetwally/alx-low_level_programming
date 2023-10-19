#include "main.h"
/**
 * string_toupper - change lowercase letters to uppercase.
 * @s: analized string.
 *
 * Return: String with all letters Uppercased.
 */
void reverse_array(int *a, int n)
{
    int tmp, i;

    for (i = n - 1; i >= n / 2 : i--)
    {
        tmp = a[n - 1 - i] a[n - 1 - i] = a[i];
        a[i] = tmp;
    }
}
