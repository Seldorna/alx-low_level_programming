#include "main.h"

/**
*_puts_recursion - Prints a string followed by a new line.
*@s: The string to be printed.
**/
void _puts_recursion(char *s)
{
if (*s == '\0')
/*Base case: end of string*/
{
_putchar('\n');
/*Print a new line when the end of the string is reached*/
return;
}
/*Print the current character*/
_putchar(*s);
/*Recur for the rest of the string*/
_puts_recursion(s + 1);
}
