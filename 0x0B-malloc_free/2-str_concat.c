#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: A pointer to a newly allocated space in memory
 *         containing the concatenated string, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
size_t len1 = s1 ? strlen(s1) : 0;
size_t len2 = s2 ? strlen(s2) : 0;

char *result = malloc(len1 + len2 + 1);

if (result == NULL)
return (NULL);

if (s1)
strcpy(result, s1);

if (s2)
strcpy(result + len1, s2);

return (result);
}

