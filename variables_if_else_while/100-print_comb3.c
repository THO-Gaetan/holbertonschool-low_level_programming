#include <stdio.h>

int main(void)
{
  int second, one;
  second = 0;
  while (second <= 8)
  {
    one = 1;
    while (one <= 9)
      {
	putchar(second + '0');
	putchar(one + '0');
	one++;
      }
    if (second != 8 && one != 9)
      {
	putchar(',');
	putchar(' ');
      }
    second++;
  }
  return (0);
}
