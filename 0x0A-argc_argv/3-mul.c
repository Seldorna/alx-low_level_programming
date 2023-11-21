#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Counts arguments provided
 * @argv: Pointer to array of pointers argument
 *
 * Return: 0 Always - Success
 */
int main(int argc, char **argv)
{
int i, multiple = 1;

if (argc != 3)
{
printf("Error\n");
return (1);
}
for (i = 1; i < argc; i++)
{
multiple *= atoi(argv[i]);
}
printf("%d\n", multiple);
return (0);
}

