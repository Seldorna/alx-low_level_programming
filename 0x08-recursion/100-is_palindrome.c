#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
* is_alnum - Checks if a character is alphanumeric.
* @ch: The character to check.
*
* Return: 1 if the character is alphanumeric, 0 otherwise.
*/
int is_alnum(char ch)
{
return (isalnum((unsigned char)ch));
}

/**
* is_palindrome_recursive - Checks if a string is a palindrome recursively.
* @s: The string to check.
* @start: The starting index for comparison.
* @end: The ending index for comparison.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome_recursive(char *s, int start, int end)
{
/* Base case: An empty string or a single character is a palindrome */
if (start >= end)
{
return (1);
}

while (!is_alnum(s[start]) && start < end)
{
start++;
}

while (!is_alnum(s[end]) && start < end)
{
end--;
}

if (tolower(s[start]) != tolower(s[end]))
{
return (0);
}

return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
* is_palindrome - Checks if a string is a palindrome.
* @s: The string to check.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
int len = strlen(s);

return (is_palindrome_recursive(s, 0, len - 1));
}
