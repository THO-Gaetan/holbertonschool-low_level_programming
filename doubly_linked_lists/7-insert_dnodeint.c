#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i = 0;

	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (*h != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = new;
	temp->next = new;
	new->prev = temp;
	return (new);
}