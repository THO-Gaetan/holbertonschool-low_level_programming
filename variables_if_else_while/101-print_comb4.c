#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits
 *
 * Description: Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int third, second, one;
third = 0;
while (third <= 7)
{
second = third + 1;
while (second <= 8)
{
one = second + 1;
while (one <= 9)
{
putchar(third + '0');
putchar(second + '0');
putchar(one + '0');
if (!(third == 7 && second == 8 && one == 9))
{
putchar(',');
putchar(' ');
}
one++;
}
second++;
}
third++;
}
putchar('\n');
return (0);
}
