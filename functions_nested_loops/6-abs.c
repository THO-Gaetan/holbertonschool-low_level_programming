#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @i: The integer to compute the absolute value of
 *
 * Description: This function calculates the absolute value of the input
 * integer. If the input is non-negative, it returns the input as is.
 * If the input is negative, it returns the negation of the input.
 *
 * Return: The absolute value of the input integer
 */
int _abs(int i)
{
if (i >= 0)
{
return (i);
}
return (-i);
}
