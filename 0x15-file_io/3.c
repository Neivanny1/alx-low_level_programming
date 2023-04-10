#include "main.h"

/**
 * main - copies content of a file to another
 * @holder1: counts arguments
 * @holder2: argument vector
 *
 * Return: 0 for success or error code for failure
 */

int main(int holder1, char *holder2[])
{
	int file_from, file_to, read_counts, write_counts;
	char buffer[BUFF_SIZE];

	if (holder1 != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(holder2[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", holder2[1]), exit(98);

	file_to = open(holder2[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", holder2[2]), exit(99);

	do {
		read_counts = read(file_from, buffer, BUFF_SIZE);
		if (read_counts == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", holder2[1]), exit(98);
		write_counts = write(file_to, buffer, read_counts);
		if (write_counts == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", holder2[2]), exit(99);
	} while (read_counts == BUFF_SIZE);

	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
