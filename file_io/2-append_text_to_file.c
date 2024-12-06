#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 *         0 if the file can not be opened or read, or if filename is NULL,
 *         or if write fails or does not write the expected amount of bytes
 */
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

	box = malloc(sizeof(char) * letters);
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
