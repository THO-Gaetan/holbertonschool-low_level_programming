#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints sizes of various types with specific formatting
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int n;
  int digit;
  
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  digit = n % 10;
  printf("Last digit of %d is %d ", n, digit);
  if (n > 5)
    {
      printf("and is greater than 5\n");
    }
  else if (n == 0)
    {
      printf("and is 0\n");
    }
  else if (n < 6 && n != 0)
    {
      printf("and is less than 6 and not 0\n");
    }
  return (0);
}
