#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: name of the file
 * @letters: the number of letters it could read and print
 * Return: the actual num of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fl;
	int opfile, wr, rd;

	fl = malloc(sizeof(char) * letters);
	if (filename == NULL || fl == NULL)
		return (0);

	opfile = open(filename, O_RDONLY);
	if (opfile < 0)
	{
		close(opfile);
		free(fl);
		return (0);
	}
	rd = read(opfile, fl, letters);
	wr = write(STDOUT_FILENO, fl, rd);
	free(fl);
	close(opfile);
	if (wr < 0 || rd < 0)
		return (0);
	return (wr);
}
