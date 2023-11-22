#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates command line arguments into a single string.
 * @ac: The number of command line arguments.
 * @av: An array of strings containing the command line arguments.
 *
 * Return: A pointer to the newly allocated string containing
 *         the concatenated command line arguments, or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
int i, j, len = 0, pos = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
len += strlen(av[i]) + 1;

str = malloc(len *sizeof(char));

if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
str[pos++] = av[i][j];

str[pos++] = '\n';
}

str[pos] = '\0';

return (str);
}

