#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
putchar('0');
putchar('1');
putchar(',');
putchar(' ');

int n;
for (int n = 1; n <= 9; n++)
{
for (int m = 0; m < n; m++)
{
putchar('0' + n);
putchar('0' + m);
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
