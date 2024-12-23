#include "dog.h"
#include "stdio.h"
/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: This function prints the contents of a struct dog.
 * If an element is NULL, it prints (nil) instead of the element.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
