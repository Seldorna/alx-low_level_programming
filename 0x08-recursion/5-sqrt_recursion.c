#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursion - returns the natural square root of a number
* @r: number to calculate the square root of
*
* Return: the resulting square root
*/
int _sqrt_recursion(int r)
{
if (r < 0)
return (-1);
return (actual_sqrt_recursion(r, 0));
}

/**
* actual_sqrt_recursion - recurses to find the natural square root of a number
* @r: number to calculate the natural square root of
* @i: iterator
*
* Return: the resulting square root
*/

int actual_sqrt_recursion(int r, int i)
{
if (i * i > r)
return (-1);
if (i * i == r)
return (i);
return (actual_sqrt_recursion(r, i + 1));
}
