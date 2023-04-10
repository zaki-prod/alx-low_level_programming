#include "main.h"

/**
 * append_text_to_file - Adds text to a file’s end.
 * @filename:  A pointer to the file’s name
 * @text_content: The text to be added to the file’s end.
 *
 * Return: -1 if the function fails or filename is NULL.
 *          -1 if the file is missing or user can't write to it.
 *         1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}


