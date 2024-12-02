#include "lists.h"

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
	while (*head != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	if (temp != NULL)
		temp->prev->next = temp->next;
	if (temp != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
