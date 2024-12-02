#include "lists.h"
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the pointer of the head of the list
 * @str: String to be added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
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
/**
 * str_len - Calculates the length of a string
 * @str: The string to measure
 *
 * Return: The length of the string
 */
size_t str_len(const char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}
