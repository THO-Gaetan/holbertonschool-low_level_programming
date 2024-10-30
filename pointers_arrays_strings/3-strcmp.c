#include "main.h"
*/**
 * _strcmp - Compares two strings
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
int run = 0;
int runv2 = 0;
char *oups = s1;
char *help = s2;
int i = 0;
while (*oups)
{
run++;
oups++;
}
while (*help)
{
runv2++;
help++;
}
while (i < run && i < runv2)
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
i++;
s1++;
s2++;
}
return (run - runv2);
}
