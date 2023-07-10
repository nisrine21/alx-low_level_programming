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
	ssize_t bytes_w;

	if (filename == 0)
		return (0);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (!text_content)
		bytes_w = write(fd, text_content, strlen(text_content));
	if (bytes_w == -1 || (size_t)bytes_w != strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
