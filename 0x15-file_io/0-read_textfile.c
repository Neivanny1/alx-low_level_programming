#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the standard output
 * @filename: The name of the file to read
 * @letters: The number of bytes to read
 *
 * Return: Actual number of letters read,or 0 if the file couldn't be opened
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int opened_File, read_Bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	opened_File = open(filename, O_RDONLY);
	if (opened_File == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	read_Bytes = read(opened_File, buffer, letters);
	if (read_Bytes == -1)
	{
		free(buffer);
		return (0);
	}
	write(STDOUT_FILENO, buffer, read_Bytes);

	free(buffer);
	close(opened_File);
	return (read_Bytes);
}
