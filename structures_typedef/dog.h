#ifndef DOG_H
#define DOG_H
/**
 * struct dog_t - A structure representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This structure holds information about a dog,
 * including its name, age, and owner.
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog_t dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
