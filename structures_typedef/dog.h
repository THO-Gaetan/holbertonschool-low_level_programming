#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A structure representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This structure holds information about a dog,
 * including its name, age, and owner.
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} my_dog;

#endif
