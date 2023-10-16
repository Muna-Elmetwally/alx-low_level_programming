#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int t, n, i;

	t = 0;

	while (str[t] != '\0')
	{
		t++;
	}

	if (t % 2 == 0)
	{
		for (i = t / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (t % 2)
	{
		for (n = t - 1) / 2; n < t - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
