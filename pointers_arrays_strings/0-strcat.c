#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to be appended
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int n = 0;
int run = 0;
int runv2 = 0;
char *oups = dest;
char *help = src;
int sum;
while (*oups != '\0')
{
oups++;
runv2++;
}
runv2--;
while (*help != '\0')
{
help++;
run++;
}
sum = run + runv2;
runv2++;
while (runv2 <= sum)
{
dest[runv2] = src[n];
n++;
runv2++;
}
return (dest);
}
