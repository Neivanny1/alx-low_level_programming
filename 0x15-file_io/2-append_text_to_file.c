#include "main.h"

/**
 * append_text_to_file - appends text to end of the file.
 *
 * @filename: file to append text to.
 * @text_content: content to append to file.
 *
 * Return: 1 for success else -1.
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int file, chars = 0, bytes_to_write;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[chars])
			chars++;
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	bytes_to_write = write(file, text_content, chars);
	if (bytes_to_write == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (0);
}
