#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	bytes_written = write(fd, text_content, str_len(text_content));
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

int str_len(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}
