#include "main.h"
/**
 * rev_string - Reverses a string in place
 * @s: Pointer to the string to be reversed
 *
 * Description: This function reverses the characters in the input string.
 * It modifies the original string without using any additional array.
 *
 * Return: void
 */
void rev_string(char *s)
{
int len = 0;
char temp;
char *help = s;
int i = 0;
while (*help != '\0')
{
help++;
len++;
}
help--;
while (i < len / 2)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
i++;
}
return;
}
