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
int i = 48;
int v = 44;
while (i <= 57)
{
putchar(i);
i++;
if (i != 57)
{
putchar("v");
putchar(' ');
}
}
putchar('\n');
return (0); }
