#include <stdio.h>
#include "main.h"
/**
 * _islower - Checks for lowercase character
 * @c: The character to check
 *
 * Description: This function determines whether a given character is
 * lowercase or not. It checks if the ASCII value of the character falls
 * within the range of lowercase letters ('a' to 'z').
 *
 * Return: 1 if c is lowercase, 0 otherwise
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
