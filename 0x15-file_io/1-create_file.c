#include "main.h"

/**
* create_file - Creates a file.
* @file_in_question: A pointer to the name of the file to create.
* @document_content: A pointer to a string to write to the file.
*
* Return: 1 if successful, -1 if not
*/

int create_file(const char *file_in_question, char *document_content)

{
	int codex, reveal, reach = 0;

	if (file_in_question == NULL)
	return (-1);

	if (document_content != NULL)
	{
		for (reach = 0; document_content[reach];)
		reach++;
	}

	codex = open(file_in_question, O_CREAT | O_RDWR | O_TRUNC, 0600);
	reveal = write(codex, document_content, reach);


	if (codex == -1 || reveal == -1)
	return (-1);

	close(codex);

	return (1);
}
