#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Counts arguments provided
 * @argv: Pointer to array of pointers
 *
 * Return: 0 Always - Success
 */

int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
int j;

for (j = 0; argv[i][j]; j++)
{
if (!isdigit((unsigned char)argv[i][j]))
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
