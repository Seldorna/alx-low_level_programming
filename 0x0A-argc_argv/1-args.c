#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: pointer to array of pointers argument.
 *
 * Return: Always 0 to indicate successful execution.
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("argc = %d\n", argc - 1);
return (0);
}
