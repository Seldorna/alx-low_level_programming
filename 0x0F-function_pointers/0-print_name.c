#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints each character in a string using a specified function.
 * @name: The input string.
 * @f: A function pointer to the function used to print each character.
 */
void print_name(char *name, void (*f)(char *))
{
while (*name != '\0')
{
f(*name);
name++;
}
}

/**
 * print_char - Prints a character to the standard output.
 * @c: The character to be printed.
 */
void print_char(char c)
{
putchar(c);
}

