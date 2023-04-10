#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Display the contents of a text file on the screen.
 * @filename: The name of the text file to read.
 * @letters: The number of letters to read from the file.
 * Return: w - The number of bytes read and printed from the file.
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	buf = malloc(sizeof(char) * leeters);
	if (fd == -1)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	t = read(fd, buf, letters);
	close(fd)
	w = write(1, buf, t);
	free(buf);
	return (w);
}

