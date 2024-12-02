#include "lists.h"
/**
 * list_len - Counts the number of elements in a linked list
 * @h: Pointer to the head of the list
 *
 * Description: This function traverses a linked list and counts
 * the number of nodes in it.
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
