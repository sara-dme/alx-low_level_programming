#include "main.h"
#include <stddef.h>
/**
 * create_file -  function that creates a file.
 * @filename: name of the file
 * @text_content:  a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int opfile, letters, wr;

	opfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (filename == NULL || opfile == -1)
		return (-1);
	if (text_content == NULL)
		letters = 0;
	else
	{
		for (letters = 0; text_content[letters]; letters++)
		{
		}
	}
	wr = write(opfile, text_content, letters);
	close(opfile);
	if (wr == -1)
		return (-1);
	return (1);
}
