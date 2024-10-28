#include <stdio.h>
/**
 * main - FizzBuzz program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int len = 1;
while (len <= 100)
{
if (len >= 10 && len <= 100)
{
if ((len % 5) == 0 && (len % 3) == 0)
{
printf("FizzBuzz"); }
else if ((len % 5) == 0)
{
printf("Buzz"); }
else if ((len % 3) == 0)
{
printf("Fizz"); }
else
{
putchar((len / 10) + '0');
putchar((len % 10) + '0'); } }
else if (len >= 1 && len < 10)
{
if ((len % 5) == 0)
{
printf("Buzz"); }
else if ((len % 3) == 0)
{
printf("Fizz"); }
else
{
putchar(len + '0'); } }
if (len != 100)
{
putchar(' '); }
len++; }
putchar('\n');
return (0); }
