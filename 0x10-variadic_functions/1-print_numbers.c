#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Entry Point
 * @separator: comma space
 * @n: elements to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int x;
	va_list lis;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(lis, n);

	if (n > 0)
		printf("%d", va_arg(lis, int));
	for (x = 1; x < n; x++)
		printf("%s%d", sep, va_arg(lis, int));
	printf("\n");
	va_end(lis);
}
