#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the array to be reversed
 * @n: Number of elements in the array
 *
 * Description: This function reverses the order of elements in the given array
 * by swapping elements from the start and end, moving towards the center.
 */
void reverse_array(int *a, int n)
{
int OUPS = 0;
int HELP = n - 1;
int ALAID;
while (OUPS <= HELP)
{
ALAID = a[OUPS];
a[OUPS] = a[HELP];
a[HELP] = ALAID;
OUPS++;
HELP--;
}
return;
}
