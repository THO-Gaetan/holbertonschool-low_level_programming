#include "main.h"
/**
 * puts_half - Prints the second half of a string
 * @str: The string to be processed
 *
 * Description: This function prints the second half of the input string.
 * If the number of characters is odd, it prints the last n characters,
 * where n = (length_of_the_string - 1) / 2.
 *
 * Return: void
 */
void puts_half(char *str)
{
int len = 0;
int run = 0;
char *help = str;
while (*help != '\0')
{
help++;
len++;
}
help--;
if (len % 2 !=0)
{
run--;
}
while (*str)
{
if (run >= len / 2)
{
_putchar(*str);
}
run++;
str++;
}
_putchar('\n');
return;
}
