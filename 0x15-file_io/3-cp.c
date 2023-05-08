#include "main.h"

int file_exist(const char *filename);
int _lenth(const char *filename);

/**
 * file_exist - check if the file exist
 * @filename: name of the file
 * Return: 0 if exist -1 if not
 */
int file_exist(const char *filename)
{
	FILE *fl = fopen(filename, "r");

	if (fl == NULL)
		return (-1);
	fclose(fl);
	return (0);
}

/**
 * main - check the code
 * return: always 0
 */
int main(int ac, char **av)
{
	int file_from, file_to, wr, rd, len = 1024;
	char *buffer;

	if (ac != 3)
	{
		dprintf(2, "usage: cp %s %s ", av[1], av[2]);
		exit(97);
	}
	if (file_exist(av[1]) != 0)
	{
		dprintf(2, "Error: Can't read from file %s", av[1]);
		exit(98);
	}
	if (file_exist(av[2]) == 0)
		file_to = open(av[2], O_WRONLY | O_TRUNC);
	else
		file_to = open(av[2], O_CREAT | O_WRONLY, 0664);

	file_from = open(av[1], O_RDONLY);
	buffer = malloc(sizeof(char) * len);
	rd = read(file_from, buffer, len);
	wr = write(file_to, buffer, rd);
	free(buffer);
	if (wr == -1)
	{
		dprintf(2, "Error: Can't write to %s", av[2]);
		exit(99);
	}
	close(file_from);
	close(file_to);
	return (0);
}
