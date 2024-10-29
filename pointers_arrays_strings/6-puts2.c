#include "main.h"
/**
 * puts2 - Prints every other character of a string
 * @str: The string to be processed
 *
 * Description: This function prints every other character of the input string,
 * starting with the first character, followed by a new line.
 *
 * Return: void
 */
void puts2(char *str)
{
int len = 0;
while (*str)
{
if (len % 2 == 0)
{
_putchar(*str);
}
len++;
str++;
}
_putchar('\n');
return;
}
