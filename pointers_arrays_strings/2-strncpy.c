#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int run = 0; 
while (run < n && src[run] != '\0')
{
dest[run] = src[run];
run++;
}
while (run < n)
{
dest[run] = '\0';
run++;
}
return (dest);
}
