#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename.
 * @text_content: contents.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_w;
	int n_letters;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (filename != NULL)
	{
		for (n_letters = 0; text_content[n_letters]; n_letters++)
			;
		bytes_w = write(fd, text_content, n_letters);
		if (bytes_w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
