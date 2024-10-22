#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Description: This function prints all lowercase letters of the English
 * alphabet from 'a' to 'z', followed by a newline, and repeats this process
 * 10 times. It uses the _putchar function to print each character.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int n = 1;
while (n <= 10)
{
const char *str = "abcdefghijklmnopqrstuvwxyz\n";
while (*str)
{
_putchar(*str++);
}
n++;
}
return; }
