#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, change = 0, n;

while (s[i] != '\0')
{
n = 0;
while (accept[n] != '\0')
{
if (accept[n] == *s)
{
change = 1;
}
n++;
}
if (change == 0)
{
s++;
}
i++;
}
return (s);
}
