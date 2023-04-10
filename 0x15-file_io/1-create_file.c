#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file and writes a string to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int opened_File, counter = 0;

	if (!filename)
		return (-1);
	opened_File = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (opened_File == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[counter])
			counter++;
		if (write(opened_File, text_content, counter) != counter)
			return (-1);
	}
	close(opened_File);
	return (1);
}
