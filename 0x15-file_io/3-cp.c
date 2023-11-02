#include "main.h"

#define BUFFER_SIZE 1024

void error_exit(int code, char *message, char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(code);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char buffer[BUFFER_SIZE];
	char *file_from_str;
	char *file_to_str;
	char file_from_err[12];
	char file_to_err[12];

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to\n", "");
	}

	file_from_str = argv[1];
	file_to_str = argv[2];

	file_from = open(file_from_str, O_RDONLY);
	if (file_from == -1)
	{
		sprintf(file_from_err, "%d", file_from);
		error_exit(98, "Error: Can't read from file %s\n", file_from_err);
	}

	file_to = open(file_to_str, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		sprintf(file_to_err, "%d", file_to);
		error_exit(99, "Error: Can't write to %s\n", file_to_err);
	}

	while ((r = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(file_to, buffer, r);
		if (w != r)
        	{
			sprintf(file_to_err, "%s", file_to_str);
			error_exit(99, "Error: Can't write to %s\n", file_to_err);
		}
	}

	if (r == -1)
	{
		sprintf(file_from_err, "%s", file_from_str);
		error_exit(98, "Error: Can't read from file %s\n", file_from_err);
	}

	if (close(file_from) == -1)
	{
		sprintf(file_from_err, "%d", file_from);
		error_exit(100, "Error: Can't close fd %s\n", file_from_err);
	}
    
	if (close(file_to) == -1)
	{
		sprintf(file_to_err, "%d", file_to);
		error_exit(100, "Error: Can't close fd %s\n", file_to_err);
	}

	return (0);
}
