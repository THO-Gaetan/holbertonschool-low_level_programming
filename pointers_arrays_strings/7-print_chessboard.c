#include "main.h"
/**
 * print_chessboard - Prints the chessboard
 * @a: 2D array representing the chessboard
 *
 * Description: This function prints an 8x8 chessboard using the
 * characters stored in the 2D array 'a'.
 */
void print_chessboard(char (*a)[8])
{
int i = 0;

int j;

while (i < 8)
{
j = 0;
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
_putchar('\n');
i++;
}
}
