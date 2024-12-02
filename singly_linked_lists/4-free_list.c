#include "lists.h"

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		head = head->next;
	}
	free(head);
}