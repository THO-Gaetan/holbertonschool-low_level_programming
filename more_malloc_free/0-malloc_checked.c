#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	int *arr = malloc(b);
	if (!arr)
	{
		exit(98);
	}
	return (arr);
}