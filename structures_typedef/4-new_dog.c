#include "dog.h"
#include <stdlib.h>
/**
 * dog_change_data - Copies data from one string to another
 * @data_changed: Destination string
 * @data: Source string
 * @increment: Starting index for copying
 * @len: Length of data to copy
 *
 * Return: Pointer to the destination string
 */
char *dog_change_data(char *data_changed, char *data, int increment, int len)
{
	while (increment < len)
	{
		data_changed[increment] = data[increment];
		increment++;
	}
	return (data_changed);
}
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2, nbname = 0, nbowner = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	len1 = strlen(name);
	len2 = strlen(owner);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog_change_data(dog->name, name, nbname, len1);
	dog_change_data(dog->owner, owner, nbowner, len2);
	dog->age = age;
	return (dog);
}
