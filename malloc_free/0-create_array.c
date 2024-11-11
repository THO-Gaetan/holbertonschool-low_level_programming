#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *p = malloc(size * sizeof(int));
	if (size == 0)
	{
		return (0);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
