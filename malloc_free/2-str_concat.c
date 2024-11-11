#include "main.h"
#include <stdlib.h>

int str_concat_help(char *s1, char *s2)
{
	int i = 0, n = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[n] != '\0')
		n++;
	i += n;
	return (i);
}

char *str_concat(char *s1, char *s2)
{
	int i = 0, n = 0;
	char *p = malloc(str_concat_help(s1, s2) + 1);

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[n] != '\0')
	{
		p[i] = s2[n];
		n++;
		i++;
	}
	return (p);
}
