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
int i = 97;
while (i <= 122)
{
if (i == 113 || i == 101)
{
i++;
}
else
{
putchar(i);
i++;
}
}
putchar('\n');
return (0); }
