#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 *
 * Description: This function determines whether a given character is
 * an alphabetic character (lowercase or uppercase). It checks if the
 * ASCII value of the character falls within the ranges of lowercase
 * letters ('a' to 'z') or uppercase letters ('A' to 'Z').
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
return (0);
}
