#include <stdio.h>
/**
 * main - Entry point of the program
 * _putchar - writes a character to stdout
 * @c: the character to be written
 *
 * Description:
 * This function writes a single character to standard output stream (stdout)
 * It takes a character as an argument and returns an integer value represente
 * the character written. If an error occurs, it returns EOF (End Of File).
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);
int main(void)
{
const char *str = "_putchar\n";
while (*str)
{
_putchar(*str++);
}
return (0); }
