#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BOX_SIZE 1024

void error_exit(int code, const char *message, const char *filename);
void close_file(int fd);
/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, or exits with error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char box[BOX_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", NULL);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((bytes_read = read(fd_from, box, BOX_SIZE)) > 0)
	{
		if (bytes_read == -1)
			error_exit(98, "Error: Can't read from file %s\n", argv[1]);
		bytes_written = write(fd_to, box, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
/**
 * error_exit - Prints an error message and exits with a specific code
 * @code: The exit code
 * @message: The error message format string
 * @filename: The filename to be inserted in the error message
 */
void error_exit(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}
/**
 * close_file - Closes a file descriptor and exits if it fails
 * @fd: The file descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
