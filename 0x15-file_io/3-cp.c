#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * make_it - Allocates 1024 bytes for a buffer.
 * @file_in_question: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *make_it(char *file_in_question)

{
	char *cache;

	cache = malloc(sizeof(char) * 1024);

	if (cache == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_in_question);
		exit(99);
	}

	return (cache);
}

/**
 * end_file_usage - Closes file descriptors.
 * @f_descriptor: The file descriptor to be closed.
 */

void end_file_usage(int f_descriptor)

{
	int end_it;

	end_it = close(f_descriptor);

	if (end_it == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_descriptor);
		exit(100);
	}
}

/**
 * main - Copies contents of 1 file to the next..
 * @argc: Number of arguments supplied program.
 * @argv: Array of pointers to said arguments.
 *
 * Return: 0 on success.
 *
 * Description: If argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])

{
	int origin, destination, peruse, reveal;
	char *cache;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cache = make_it(argv[2]);
	origin = open(argv[1], O_RDONLY);
	peruse = read(origin, cache, 1024);
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (origin == -1 || peruse == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(cache);
			exit(98);
		}

		reveal = write(destination, cache, peruse);
		if (destination == -1 || reveal == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(cache);
			exit(99);
		}

		peruse = read(destination, cache, 1024);
		destination = open(argv[2], O_WRONLY | O_APPEND);

	} while (peruse > 0);

	free(cache);
	end_file_usage(origin);
	end_file_usage(destination);

	return (0);
}

