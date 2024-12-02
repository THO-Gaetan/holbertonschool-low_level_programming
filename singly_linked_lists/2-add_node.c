#include "lists.h"
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	new->len = str_len(str);
	new->next = *head;
	*head = new;
	return (*head);
}

size_t str_len(const char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}
