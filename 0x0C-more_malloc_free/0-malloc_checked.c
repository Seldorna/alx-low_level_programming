#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, print an error message and exit with status 98.
 */

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
{
printf("Error: malloc failed\n");
exit(98);
}
return (p);
}

