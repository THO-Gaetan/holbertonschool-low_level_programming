#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 *
 * Return: Sum of all the data (n) in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
