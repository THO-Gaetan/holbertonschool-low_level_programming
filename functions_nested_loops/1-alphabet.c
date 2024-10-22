#include <stdio.h>
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
int _putchar(char c);
void print_alphabet(void);
int main(void)
{
  const char *str = "abcdefghijklmnopqrstuvwxyz\n";
  while (*str)
    {
      _putchar(*str++);
    }
  print_alphabet(void);
 return (0); }
