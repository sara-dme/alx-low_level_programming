#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content:  is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opfile, wr, letters;

	opfile = open(filename, O_APPEND | O_RDWR);
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
	if (wr < 0)
		return (-1);
	return (1);
}
