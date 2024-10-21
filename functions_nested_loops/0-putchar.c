#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints a quote about programming using puts function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char *str = "_putchar";
while (*str)
{
_putchar(*str++);
}
return (0); }
