#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure to free
 *
 * Description: This function frees the memory allocated for a dog structure,
 * including the memory allocated for its name and owner strings.
 * If d is NULL, the function does nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
