#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits
 *
 * Description: Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int second, one;
second = 0;
while (second <= 8)
{
one = second + 1;
while (one <= 9)
{
putchar(second + '0');
putchar(one + '0');
if (!(second == 8 && one == 9))
{
putchar(',');
putchar(' ');
}
one++;
}
second++;
}
putchar('\n');
return (0);
}
