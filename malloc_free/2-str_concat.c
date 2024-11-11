#include "main.h"
#include <stdlib.h>
/**
 * str_concat_help - Calculates the total length of two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: The total length of s1 and s2
 */
int str_concat_help(char *s1, char *s2)
{
	int i = 0, n = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[n] != '\0')
		n++;
	i += n;
	return (i);
}
/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the newly allocated space in memory containing
 *         the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, n = 0;
	char *p = malloc(str_concat_help(s1, s2) + 1);

	if (!p)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[n] != '\0')
	{
		p[i] = s2[n];
		n++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
