#include "main.h"

/**
 * read_textfile - prints specified amount of letters from filename to stdout
 * @filename: input file
 * @letters: number of characters from input file to be printed
 * Return: number of letters successfully printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *buf = NULL;
	ssize_t in = 0, out = 0;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (close(fd), 0);
	in = read(fd, buf, letters);
	close(fd);
	if (in == -1)
		return (0);
	out = write(STDOUT_FILENO, buf, in);
	free(buf);
	if (out != in)
		return (0);
	return (out);
}
