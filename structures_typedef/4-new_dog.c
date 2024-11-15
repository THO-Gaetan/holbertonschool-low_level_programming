#include "dog.h"
#include <stdlib.h>
char *dog_change_data(char *data_changed, char *data, int increment, int len)
{
	while (increment < len)
	{
		data_changed[increment] = data[increment];
		increment++;
	}
	return (data_changed);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2, nbname = 0, nbowner = 0;

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
	dog_change_data(dog->name, name, nbname, len1);
	dog_change_data(dog->owner, owner, nbowner, len2);
	dog->age = age;
	return (dog);
}
