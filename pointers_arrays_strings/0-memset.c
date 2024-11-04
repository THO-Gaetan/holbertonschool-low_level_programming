#include "main.h"

void *_memset(char *s, char b, unsigned int n)
{
int i = 0
while (i < n)
{
s[i] = b
i++;
}
return;
}
