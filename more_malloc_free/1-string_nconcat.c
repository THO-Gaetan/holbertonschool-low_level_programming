#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat_len - Calculates the length of a string
 * @str: The string to measure
 *
 * Return: The length of the string
 */
int string_nconcat_len(char *str)
{
	int len = 0;

	while (str[len])
	{
		len++;
	}
	return (len);
}
/**
 * str_while - Concatenates two strings up to n bytes of the second string
 * @str1: The first string
 * @str2: The second string
 * @len: Length of the first string
 * @len2: Number of bytes to concatenate from the second string
 *
 * Return: Pointer to the newly allocated space in memory, or NULL if it fails
 */
char *str_while(char *str1, char *str2, unsigned int len, unsigned int len2)
{
	unsigned int i = 0, n = 0;
	char *p = malloc((len + len2) * sizeof(char) + 1);

	if (str1 == NULL)
	{
		str1 = "";
	}
	if (str2 == NULL)
	{
		str2 = "";
	}
	if (!p)
	{
		return ("");
	}
	while (i < len)
	{
		p[i] = str1[i];
		i++;
	}
	while (n < len2)
	{
		p[i + n] = str2[n];
		n++;
	}
	p[i + n] = '\0';
	return (p);
}
/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 *
 * Return: Pointer to the newly allocated space in memory, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, len2 = 0;

	len = string_nconcat_len(s1);
	len2 = string_nconcat_len(s2);

	if (n >= len2)
	{
		n = len2;
	}
	return (str_while(s1, s2, len, n));
}
