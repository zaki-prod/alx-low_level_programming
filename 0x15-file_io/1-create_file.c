/**
 * create_file - Make a new file and write some text to it.
 * @filename: The name of the file to create.
 * @text_content:  The string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	return (-1);

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd == -1)
	return (-1);

if (text_content != NULL)
{
	while (text_content[len])
		len++;
	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);
}

close(fd);

return (1);
}

