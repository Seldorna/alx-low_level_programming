#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_recursive - Helper function for recursive palindrome check.
 * @s: The string to check.
 * @start: The starting index for comparison.
 * @end: The ending index for comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
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

if (len <= 1)
{
return (1);
}
return (is_palindrome_recursive(s, 0, len - 1));
}

