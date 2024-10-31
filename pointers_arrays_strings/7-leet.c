#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 *
 * Description: This function replaces specific letters with numbers:
 * 'a' and 'A' with '4', 'e' and 'E' with '3', 'o' and 'O' with '0',
 * 't' and 'T' with '7', 'l' and 'L' with '1'.
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
char *s = str;
char *oups = "aAeEoOtTlL";
char *help = "4433007711";
int i = 0;
int n;
while (s[i] != '\0')
{
n = 0;
while (oups[n] != '\0')
{
if (s[i] == oups[n])
{
str[i] = help[n];
}
n++;
}
i++;
}
return (str);
}
