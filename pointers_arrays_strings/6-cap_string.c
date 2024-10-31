#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
char *s = str;
int cap = 1, i = 0;
char *maj = " ,;.!?\"(){}\t\n";
while (*s)
{
if ((*s > 96 && *s < 123) && cap == 1)
{
str[i] -= 32;
cap = 0;
}
else
{
cap = 0;
}
while (*maj)
{
if (*s == *maj && cap == 0)
{
cap = 1;
}
maj++;
}
maj--;
while (*maj)
{
maj--;
}
maj++;
i++;
s++;
}
return (str);
}
