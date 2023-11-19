#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursion - Calculates the natural square root of a number.
* @r: The number for which to calculate the square root.
*
* Return: The natural square root of r, or -1 if no natural square root for r
*/
int _sqrt_recursion(int r)
{
if (r < 0)
{
/* Error case: Negative input, no natural square root */
return (-1);
}
else if (r == 0 || r == 1)
{
/* Base case: Square root of 0 or 1 is the number itself */
return (r);
}
else
{
/* Recursive case: Check for square root in the range [1, r/2] */
int i;
for (i = 1; i <= r / 2; i++)
{
if (i * i == r)
{
return (i);
}
else if (i * i > r)
{
/* If i*i exceeds r, then n does not have a natural square root */
return (-1);
}
}
/* If no exact square root is found in the loop, return -1 */
return (-1);
}
}

