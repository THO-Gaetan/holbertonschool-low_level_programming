#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return ();

	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;
}
