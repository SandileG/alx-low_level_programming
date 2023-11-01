#include "main.h"

#define BUFFER_SIZE 1024

/**
 * open_file - Opens a file
 * @filename: the name of the file to open
 * @flags: the flags for opening the file
 * @mode: the mode for opening the file
 *
 * Return: the file descriptor
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * write_error_and_exit - Writes an error message and exits the program
 * @message: the error message to write
 * @file: the name of the file
 * @status: the exit status
 */
void write_error_and_exit(const char *message, const char *file, int status)
{
	dprintf(STDERR_FILENO, message, file);
	exit(status);
}

/**
 * copy_file - Copies the content of one file to another
 * @from: the file descriptor to read from
 * @to: the file descriptor to write to
 * @from_file: the name of the file to read from
 * @to_file: the name of the file to write to
 */
void copy_file(int from, int to, char *from_file, char *to_file)
{
	ssize_t r, w;
	char buffer[BUFFER_SIZE];

	while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(to, buffer, r);
		if (w == -1)
			write_error_and_exit("Error: Can't write to %s\n", to_file, 99);
	}

	if (r == -1)
		write_error_and_exit("Error: Can't read from file %s\n", from_file, 98);
}

/**
 * close_file - Closes a file
 * @fd: the file descriptor to close
 * @filename: the name of the file
 *
 * Return: 0 on success
 */
int close_file(int fd, char *filename)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}

/**
 * main - Copies the content of a file to another file
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	int from, to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open_file(av[1], O_RDONLY, 0);
	to = open_file(av[2], O_WRONLY | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	copy_file(from, to, av[1], av[2]);

	close_file(from, av[1]);
	close_file(to, av[2]);

	return (0);
}
