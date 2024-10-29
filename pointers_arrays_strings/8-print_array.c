#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an integer array
 * @a: Pointer to the array of integers
 * @n: Number of elements to print
 *
 * Description: This function prints the first n elements of an integer array,
 * separated by commas and spaces. It does not print a newline at the end.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", a[i]);
i++;
if (i != n)
{
printf(", ");
}
}
printf("\n");
return;
}
