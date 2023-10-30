#include "main.h"
/**
 * Function that reads a text file and outputs it to the standard output
 * @filename: The name of the file to be read
 * @letters: The number of letters to be read and printed
 * Return: The count of letters printed, or 0 if the operation fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, j;
	char *buf;
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(fd, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(fd);
	j = write(STDOUT_FILENO, buf, i);
	if (j < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (j);
}
