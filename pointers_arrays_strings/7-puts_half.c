#include "main.c"
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
while (*str)
{
if (len >= 5)
{
_putchar(*str);
}
len++;
str++;
}
_putchar('\n');
return;
}
