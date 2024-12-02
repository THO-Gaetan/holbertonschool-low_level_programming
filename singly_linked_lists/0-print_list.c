#include "lists.h"
/**
 * print_list - Write and counts the number of elements in a linked list
 * @h: Pointer to the head of the list
 *
 * Description: This function traverses a linked list and write every nodes and
 * counts the number of nodes in it.
 *
 * Return: The number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%lu %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
