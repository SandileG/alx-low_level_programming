#include "main.h"

/**
* append_text_to_file - Appends text at end of file.
* @file_in_question: A pointer to the name of file.
* @document_content: String to add at the end of file.
*
* Return:	-1 if function/filename is NULL
* 		-1 if file doesn't exist or if no permission granted
* 		 1 if successful
*/

int append_text_to_file(const char *file_in_question, char *document_content)

{
	int access, reveal, reach = 0;

	if (file_in_question == NULL)
	return (-1);

	if (document_content != NULL)
	{
		for (reach = 0; document_content[reach];)
		reach++;
	}

	access = open(file_in_question, O_WRONLY | O_APPEND);
	reveal = write(access, document_content, reach);

	if (access == -1 || reveal == -1)
	return (-1);

	close(access);

	return (1);
}
