#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the first element of the matrix
 * @size: Size of the matrix (number of rows/columns)
 *
 * Description: This function calculates and prints the sum of the main
 * diagonal and the secondary diagonal of a square integer matrix.
 */
void print_diagsums(int *a, int size)
{
int i = 0, sum1 = 0, sum2 = 0;

while (i < size)
{
sum1 = sum1 + *(a + i * size + i);
sum2 = sum2 + *(a + i * size + (size - 1 - i));
i++;
}
printf("%d, %d", sum1, sum2);
printf("\n");
}
