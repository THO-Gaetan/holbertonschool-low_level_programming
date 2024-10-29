#include "main.h"
/**
 * _strcpy - Copies a string from source to destination
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Description: This function copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer
 * pointed to by dest.
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int len = 0;
char *help = src;
while (*help != '\0')
{
help++;
len++;
}
help--;
while (i <= len)
{
dest[i] = src[i];
i++;
}
return (dest);
}
