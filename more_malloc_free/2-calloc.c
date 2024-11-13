#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: Number of elements in the array
 * 
 *
 * Return: A pointer to the allocated memory
 *         If nmemb or size is 0, returns NULL
 *         If malloc fails, returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * sizeof(size));

	if (p == NULL)
		return (0);
	while (i < nmemb)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
