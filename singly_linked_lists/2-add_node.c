#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *head;
	list_t *new;
	list_t hello = {str, str_len(str), NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (-1);
	}
	new->
}

size_t str_len(const char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}