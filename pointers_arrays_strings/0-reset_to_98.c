#include "main.h"
/**
 * reset_to_98 - Resets the value pointed to by n to 98
 * @n: Pointer to an integer to be reset
 *
 * Description: This function takes a pointer to an integer and
 * modifies the value it points to, setting it to 98.
 */
void reset_to_98(int *n)
{
while (*n > 98)
{
(*n)--;
}
while (*n < 98)
{
(*n)++;
}
return;
}
