#include "main.h"

/**
 *
 *
 *
 *
 */

int create_file(const char *file, char *text)
{
	int fd = 0, strlen_sub = 0;
	ssize_t out = 0;

	if (file == NULL)
		return (-1);

	fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	for (; text[strlen_sub]; strlen_sub++)
			;

	out = write(fd, text, strlen_sub);

	close(fd);

	if (out == -1 || out != strlen_sub)
		return (-1);

	return (1);
}
