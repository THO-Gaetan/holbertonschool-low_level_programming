#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a doubly
 * linked list
 * @head: Pointer to a pointer to the head of the doubly linked list
 * @index: Index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed (e.g., index out of range)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = *head;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
