#include <stdio.h>
#include <unistd.h>

int main(void)
{
  const char *dora = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  write(1,dora,59);
  return (1);
}
