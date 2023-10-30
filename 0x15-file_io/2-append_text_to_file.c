#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: file to append the text to
 * @text_content: content to be append into the file
 *
 * Return: 1 on success and -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, j = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
