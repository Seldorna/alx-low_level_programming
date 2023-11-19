#include "main.h"

/**
* factorial - Returns the factorial of a given number.
* @i: The number to calculate the factorial of.
*
* Return: The factorial of i, or 1 if i is 0.
*/
int factorial(int i)
{
if (i <= 1)
return (1);
else
return (i * factorial(i - 1));
}
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
int i = 8;

printf("Factorial of %d is %d\n", i, factorial(i));
return (0);
}

