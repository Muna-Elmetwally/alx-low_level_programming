#include <stdio.h>
#include "main.h"
/**
* main - Prints the number of arguments passed into main
* @argc: Number of command line arguments
* @argv: Array name
* Return: 0
*/
int main(int argc, char *argv[])
{
int b;
if (argc == 1)
printf("%d\n", argc - 1);
else
{
for (b = 0; *argv; b++, argv++)
;
printf("%d\n", b - 1);
}
return (0);
}
