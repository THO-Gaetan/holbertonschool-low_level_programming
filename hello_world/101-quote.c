#include <stdio.h>

int main(void)
{
  const char *dora = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(STDOUT_FILENO,dora,58);
  return (1);
}
