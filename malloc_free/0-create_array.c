#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars initializes it with specific char
 * @size: The size of the array to create
 * @c: The char to initialize the array with
 *
 * Return: Pointer to the array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *p = malloc(size * sizeof(int));

	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
