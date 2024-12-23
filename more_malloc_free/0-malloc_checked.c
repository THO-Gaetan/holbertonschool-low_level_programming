#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 *         If malloc fails, the function causes normal process
 *         termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	int *arr = malloc(b);

	if (!arr)
	{
		exit(98);
	}
	return (arr);
}
