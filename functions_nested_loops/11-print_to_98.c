#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Description: This function prints all natural numbers from n to 98,
 * separated by a comma and space. The numbers are printed in order,
 * either ascending or descending depending on whether n is less than
 * or greater than 98. The function handles both positive and negative
 * numbers, and prints up to 3-digit numbers correctly.
 *
 * Return: void
 */
void print_to_98(int n)
{
int neg;
while (n != 98)
{
if (n != 98)
{
if (n < 0)
{
_putchar('-');
n = -n;
neg++; }
if (n < 10)
{
_putchar(n + '0'); }
else if (n < 100)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0'); }
else if (n < 1000)
{
_putchar((n / 100) + '0');
_putchar(((n / 10) % 10) + '0');
_putchar((n % 10) + '0'); }
_putchar(44);
_putchar(32);
if (neg == 1)
{
neg--;
n = -n; } }
if (n < 98)
{
n++; }
else if (n > 98)
{
n--; } }
if (n == 98)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0'); }
_putchar('\n');
return; }
