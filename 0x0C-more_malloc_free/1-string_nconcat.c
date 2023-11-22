#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int len1, len2;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
{
n = len2;
}
p = malloc(len1 + n + 1);

if (p == NULL)
{
return (NULL);
}

memcpy(p, s1, len1);
memcpy(p + len1, s2, n);
p[len1 + n] = '\0';

return (p);
}

