#include "main.h"

/**
 * copy_file - Copies the content of one file to another.
 * @source_fd: File descriptor of the source file.
 * @destination_fd: File descriptor of the destination file.
 */
void copy_file(int source_fd, int destination_fd);

/**
 * main - Entry point of the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int source_fd, destination_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	destination_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
					S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (destination_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	copy_file(source_fd, destination_fd);

	if (close(source_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}

	if (close(destination_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_fd);
		exit(100);
	}

	exit(0);
}

/**
 * copy_file - Copies the content of one file to another.
 * @source_fd: File descriptor of the source file.
 * @destination_fd: File descriptor of the destination file.
 */
void copy_file(int source_fd, int destination_fd)
{
	char buffer[BUFFER_SIZE];
	int bytes_read;

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(destination_fd, buffer, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to destination file\n");
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
		exit(98);
	}
}
