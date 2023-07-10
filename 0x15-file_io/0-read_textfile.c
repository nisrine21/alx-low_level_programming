#include "main.h"
/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output.
 * @filename: filename.
 * @letters: numbers of letters printed
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_r;
	ssize_t bytes_w;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	bytes_r = read(fd, buffer, letters);
	if (bytes_r == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);
	if (bytes_w == -1 || bytes_w != bytes_r)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytes_r);
}
