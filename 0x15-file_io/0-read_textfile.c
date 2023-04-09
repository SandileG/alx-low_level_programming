#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: reveal- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *abundance;
	ssize_t file_in_question;
	ssize_t reveal;
	ssize_t storage;

	file_in_question = open(filename, O_RDONLY);
	if (file_in_question == -1)
		return (0);

	abundance = malloc(sizeof(char) * letters);
	storage = read(file_in_question, abundance, letters);
	reveal = write(STDOUT_FILENO, abundance, storage);

	free(abundance);
	close(file_in_question);
	return (reveal);
}
