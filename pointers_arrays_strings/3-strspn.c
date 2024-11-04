#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: Number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int r = 0;

int n;

int stop = 0;

int i = 0;

while (s[i] != '\0')
{
if (s[i] == ' ')
{
stop = 1;
}
n = 0;
while (accept[n] != '\0' && stop == 0)
{
if (s[i] == accept[n])
{
r++;
}
n++;
}
i++;
}
return (r);
}
