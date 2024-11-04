#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The character to find
 *
 * Return: A pointer to the first occurrence character c in the string s,
 *         or 0 if the character is not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (0);
}
