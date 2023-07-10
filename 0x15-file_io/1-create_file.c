#include "main.h"

/**
 * create_file - creates a file and write string in it.
 *
 * @filename: name of file created.
 * @text_content: NULL-terminated string to be written to file.
 *
 * Return: 1 on sucess, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file, chars = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[chars])
			chars++;
		if (write(file, text_content, chars) != chars)
			return (-1);
	}
	close(file);
	return (1);
}
