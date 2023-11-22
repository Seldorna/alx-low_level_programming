#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value in the array.
 * @max: The maximum value in the array.
 *
 * Return: A pointer to the allocated array, or NULL if fail or invalid input
 */

int *array_range(int min, int max)
{
int *p;
int size, i;

if (min > max)
{
return (NULL);
}

size = max - min + 1;

p = malloc(size *sizeof(int));

if (p == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
p[i] = min + i;
}

return (p);
}

