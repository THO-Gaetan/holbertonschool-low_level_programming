#include "main.h"

void *_memset(char *s, char b, unsigned int n)
{
int i = 0
while (s[i] != '\0')
{
s[i] = b
i++;
}
return;
}
