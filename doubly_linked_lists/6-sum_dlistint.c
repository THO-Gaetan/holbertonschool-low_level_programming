#include "lists.h"

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