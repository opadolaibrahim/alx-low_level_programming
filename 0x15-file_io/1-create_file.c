#include "main.h"

/**
 * create_file - creates a new file and fills it with content
 * @filename:The name of the file to created
 * @text_content: text to be written in the file
 *
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, j = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;
		i = write(fd, text_content, j);
		if (i != j)
			return (-1);
	}

	close(fd);

	return (1);
}
