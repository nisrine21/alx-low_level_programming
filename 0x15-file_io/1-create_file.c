#include "main.h"

/**
 * create_file - creates a file.
 * @filename: filename
 * @text_content: content writed in the file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_w;
	int n_letters;

	if (filename == 0)
		return (0);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (n_letters = 0; text_content[n_letters]; n_letters++)
		;
	bytes_w = write(fd, text_content, n_letters);
	if (bytes_w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
