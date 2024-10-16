#include "main.h"

int cp_cool(const char *file_in, const char *file_out, FILE *stream);

/**
 * main - calls cp_cool function to copy in file to out file, user specified
 * @ac: count of arguments supplied (argc)
 * @av: vector of supplied arguments (argv)
 * Return: 0 upon success
 *
 * EXITS (97: incorrect argc, 98: FI error, 99: FO error, 100: close failure)
 */
int main(int ac, char *av[])
{
	int cp_wave = 0, puller = 0;
	FILE *stream;

	stream = fopen("closeError", "w+");
	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
		fclose(stream), system("rm closeError"),
		exit(97);
	cp_wave = cp_cool(av[1], av[2], stream);
	if (cp_wave == 198)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
		fclose(stream), system("rm closeError"),
		exit(98);
	if (cp_wave == 199)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
		fclose(stream), system("rm closeError"),
		exit(99);
	if (cp_wave == 200)
		puller = fgetc(stream),
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", puller),
		fclose(stream), system("rm closeError"),
		exit(100);
	fclose(stream), system("rm closeError");
	return (0);
}

/**
 * cp_cool - copies input file to output file
 * @file_in: input file
 * @file_out: output file
 * @stream: stream used to transmit respective fd close upon failure
 * Return: 144 upon success
 */
int cp_cool(const char *file_in, const char *file_out, FILE *stream)
{
	int fd_in = 0, fd_out = 0, cl_in = 0, cl_out = 0;
	char buf[1024];
	ssize_t in = 1024, out = 0;

	fd_in = open(file_in, O_RDONLY);
	if (fd_in == -1)
		return (198);
	fd_out = open(file_out, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_out == -1)
		return (199);
	for (; in == 1024;)
	{
		in = read(fd_in, buf, in);
		if (in == -1)
			return (198);
		out = write(fd_out, buf, in);
		if (out == -1)
			return (199);
	}
	cl_in = close(fd_in), cl_out = close(fd_out);
	if (cl_in == -1)
		return (fputc(fd_in, stream), 200);
	if (cl_out == -1)
		return (fputc(fd_out, stream), 200);
	return (144);
}
