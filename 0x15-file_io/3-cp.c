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
	int main_file, copy_file, read_counts, write_counts;
	char buffer[BUFF_SIZE];

	if (holder1 != 3)
		dprintf(STDERR_FILENO, "Usage: cp main_file copy_file\n");
		exit(97);
	main_file = open(holder2[1], O_RDONLY);
	if (main_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", holder2[1]);
		exit(98);

	copy_file = open(holder2[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (copy_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", holder2[2]);
		exit(99);

	do {
		read_counts = read(main_file, buffer, BUFF_SIZE);
		if (read_counts == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", holder2[1]);
			exit(98);
		write_counts = write(copy_file, buffer, read_counts);
		if (write_counts == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", holder2[2]);
			exit(99);
	} while (read_counts == BUFF_SIZE);

	if (close(main_file) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close main_file %d\n", main_file);
		exit(100);

	if (close(copy_file) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close copy_file %d\n", copy_file);
		exit(100);
	return (0);
}
