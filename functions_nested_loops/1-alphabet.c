#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Description: This function prints all lowercase letters
 * of the English alphabet from 'a' to 'z', followed by a newline.
 * It uses the _putchar function to print each character.
 *
 * Return: void
 */
void print_alphabet(void)
{
char str;
for (str = 'a'; str <= 'z'; str++)
{
_putchar(str);
}
_putchar('\n');
return; }
