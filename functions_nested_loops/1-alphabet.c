#include <stdio.h>
#include "main.h"
/**
* _putchar - writes a character to stdout
* @c: the character to be written
*
* Description:
* This function writes a single character to the standard output stream
* It takes a character as an argument and returns an integer value represente
* the character written. If an error occurs, it returns EOF (End Of File).
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
  char str;
  str = "a";
  while (str <= "z")
    {
      _putchar(str);
      str++;
    }
  _putchar('\n');
  print_alphabet(); }
