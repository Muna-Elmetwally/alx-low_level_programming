#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int y = 0, x = 0;
	char *sep = ", ";
	char *str;

	va_start(valist, format);

	while (format && format[x])
		x++;

	while (format && format[y])
	{
		if (y  == (x - 1))
		{
			sep = "";
		}
		switch (format[y])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), sep);
			break;
		case 'x':
			printf("%d%s", va_arg(valist, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), sep);
			break;
		case 's':
			str = va_arg(valist, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		y++;
	}
	printf("\n");
	va_end(valist);
}
