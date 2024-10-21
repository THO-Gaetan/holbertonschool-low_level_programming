#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the string "_putchar" to the standard
 * output using a custom _putchar function. It demonstrates the use of
 * a while loop to iterate through a string and print each character.
 * _putchar - writes the character c to stdout
 * c: The str character that _putcher is writting
 * Return: Always 0 (Success)
 */
int _putchar(char c);
int main(void)
{
const char *str = "_putchar";
while (*str)
{
_putchar(*str++);
}
return (0); }
