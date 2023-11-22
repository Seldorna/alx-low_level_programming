#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints each array elem on a newline
 * @array: an array
 * @size: how many elements to print
 * @action: pointer to print in regular or hex
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int s;

if (array == NULL || action == NULL)
return;

for (s = 0; s < size; s++)
{
action(array[s]);
}
}
