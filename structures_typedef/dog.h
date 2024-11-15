#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog_t dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);

#endif
