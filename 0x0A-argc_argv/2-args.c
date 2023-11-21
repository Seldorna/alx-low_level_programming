#include "main.h"
#include <stdio.h>

/**
 * main - Entry point.
 * @argc: Counts number of arguments provided
 * @argv: pointer to array of string
 *
 * Return: 0 Always - Success.
 */

int main(int argc, char *argv[])
{
int r;
(void) argc;
for (r = 0; r < argc; r++)
{
printf("%s\n", argv[r]);
}
return (0);
}
