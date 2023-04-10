#include "main.h"

/**
 * append_text_to_file - appends text to end of the file
 * @filename: name of file to append text to
 * @text_content: content to append to file
 *
 * Return: 1for success, -1 for error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opened_File, counter = 0, written_Bytes;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[counter])
			counter++;
	}

	opened_File = open(filename, O_WRONLY | O_APPEND);
	if (opened_File == -1)
		return (-1);

	written_Bytes = write(opened_File, text_content, counter);
	if (written_Bytes == -1)
	{
		close(opened_File);
		return (-1);
	}
	close(opened_File);
	return (1);
}
