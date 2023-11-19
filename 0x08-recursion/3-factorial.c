#include "main.h"
#include <stdio.h>
/**
* factorial - Returns the factorial of a given number.
* @r: The number to calculate the factorial of.
*
* Return: The factorial of r, or 1 if r is 0.
*/
int factorial(int r)
{
if (r <= 1)
return (1);
else
return (r * factorial(r - 1));
}
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
int r = 8;

printf("Factorial of %d is %d\n", r, factorial(r));
return (0);
}

