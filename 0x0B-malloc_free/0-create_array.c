#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, initialized with a specific char.
 * @size: The size of the array.
 * @c: The character used for initialization.
 *
 * Return: If successful, a pointer to the allocated memory; otherwise, NULL.
 */

char *create_array(unsigned int size, char c)
{
char *arr = NULL;

if (size > 0)
{
arr = malloc(size * sizeof(char));
if (arr != NULL)
{
unsigned int i;
for (i = 0; i < size; i++)
{
arr[i] = c;
}
}
}

return (arr);
}

