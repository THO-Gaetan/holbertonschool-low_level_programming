#include "main.h"
/**
 * create_file - Creates a file and writes content to it
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, str_len(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
/**
 * str_len - Calculate the length of a string
 * @str: The string to measure
 *
 * Return: The length of the string
 */
int str_len(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}
