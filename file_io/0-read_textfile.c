#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *box;
	ssize_t bytes_read, bytes_written, total_written = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	box = malloc(1 * letters);
	if (box == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, box, letters);
	if (bytes_read == -1)
	{
		free(box);
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, box, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(box);
		close(fd);
		return (0);
	}
	total_written = bytes_written;
	free(box);
	close(fd);
	return (total_written);
}
