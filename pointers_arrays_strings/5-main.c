#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *s = "hello, world Maybe the day is bright";
char *f = "world";
char *t;

t = _strstr(s, f);
printf("%s\n", t);
return (0);
}
