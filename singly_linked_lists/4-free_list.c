#include "lists.h"
/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 *
 * Description: This function frees all nodes of a linked list,
 * including the strings within each node.
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
