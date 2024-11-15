#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	len1 = sizeof(name);
	len2 = sizeof(owner);
	dog->name = malloc(sizeof(char) * len1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * len2);
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
