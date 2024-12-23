#include "main.h"
#include <stdlib.h>
/**
 * strdup_count - Counts the number of characters in a string
 * @str: The input string
 *
 * Return: The number of characters in the string
 */
int strdup_count(char *str)
{
	int i = 0;

	if (!(*str))
		return (0);
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
/**
 * _strdup_while - Helper function to duplicate a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if malloc fails
 */
char *_strdup_while(char *str)
{
	int i = 0;
	char *p;

	p = malloc(strdup_count(str) * sizeof(char) + 1);

	if (!p)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		*(p + i) = str[i];
		i++;
	}
	return (p);
}

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory
 * was available or if str is NULL
 */
char *_strdup(char *str)
{
	if (!str)
	{
		return (NULL);
	}
	return (_strdup_while(str));
}
