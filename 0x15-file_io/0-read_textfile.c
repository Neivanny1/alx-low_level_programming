#include "main.h"

/**
 * ssize_t read_textfile(const char *filename, size_t letters) - reads text file and prints
 * it to the POSIX standard output.
 *
 * @filename: file to read
 * @letters: holds letters to read and print.
 * Return: actual letters it could read and print else 0 .
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int opened_File, read_Chars;
	char *buf;

	if (filename == NULL)
		return (0);
	opened_File = open(filename, O_RDONLY);
	if (opened_File == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	read_Chars = read(opened_File, buf, letters);
	if (read_Chars == -1)
	{
		free(buf);
		return (0);
	}
	write (STDOUT_FILENO, buf, read_Chars);
	free(buf);
	close(opened_File);
	return (read_Chars);
}
