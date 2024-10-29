#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: The string to be printed in reverse
 */
void print_rev(char *s)
{
while (*s)
{
(void)*s++;
}
(void)*s--;
while (*s)
{
_putchar(*s--);
}
_putchar('\n');
return;
}
