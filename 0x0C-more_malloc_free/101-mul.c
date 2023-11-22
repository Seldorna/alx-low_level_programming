#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * is_positive_number - Checks if a string represents a positive number.
 * @str: The input string to check.
 *
 * Return: 1 if the string is a positive number, 0 otherwise.
 */

int is_positive_number(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (!isdigit(str[i]))
{
return (0);
}
i++;
}
return (1);
}

/**
 * mul - Multiplies two positive numbers provided as strings.
 * @num1: The first positive number as a string.
 * @num2: The second positive number as a string.
 */

void mul(char *num1, char *num2)
{
int n1, n2;
if (!is_positive_number(num1) || !is_positive_number(num2))
{
printf("Error\n");
exit(98);
}

n1 = atoi(num1);
n2 = atoi(num2);

printf("%d\n", n1 *n2);
}
/**
 * main - Entry point. Multiplies two positive numbers provided.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char **argv)
{
if (argc != 3)
{
printf("Error\n");
return (98);
}
mul(argv[1], argv[2]);
return (0);
}
