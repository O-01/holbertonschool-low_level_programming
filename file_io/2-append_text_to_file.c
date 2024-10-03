#include "main.h"

/**
 * append_text_to_file - appends input text to specified file
 * @file: object file
 * @text: text to be input to file
 * Return: 1 upon success, -1 upon file unspecified or open/write failure
 */
int append_text_to_file(const char *file, char *text)
{
	int fd = 0, strlen_sub = 0;

	if (!file)
		return (-1);
	fd = open(file, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text)
	{
		for (; text[strlen_sub]; strlen_sub++)
			;
		if (write(fd, text, strlen_sub) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
