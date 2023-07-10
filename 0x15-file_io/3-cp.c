#include "main.h"

/**
 * main - check the code
 * @ac: numero of arg
 * @av: arg
 * Return: always 0
 */
int main(int ac, char **av)
{
	int file_from, file_to, wr, rd;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from filr%s\n", av[1]), exit(98);
	while (1)
	{
		rd = read(file_from, buffer, 1024);
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (rd > 0)
		{
			wr = write(file_to, buffer, rd);
			if (wr == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
			}
			else
				break;
		}
			if (close(file_from) < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from), exit(100);
			}
			if (close(file_to) < 0)
				dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to), exit(100);
	}
	return (0);
}
