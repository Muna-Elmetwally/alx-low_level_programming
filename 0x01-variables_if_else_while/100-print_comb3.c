#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
int n, m;
{
putchar('0');
putchar('1');
putchar(',');
putchar(' ');

for (int n = 1; i <= 9; n++)
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
