#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The character to find
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 *         or a pointer to the null terminator if c is not found
 */
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] != c)
{
s++;
}
i++;
}
return (s);
}
