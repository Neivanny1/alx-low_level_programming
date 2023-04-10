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
	int main_file, copy_file, read_counts;
	char buf[BUFFER_SIZE];

	if (holder1 != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s main_file copy_file", holder2[0]);
		exit(97);
	}
	main_file = open(holder2[1], O_RDONLY);
	if (main_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", holder2[1]);
		exit(98);
	}
	copy_file = open(holder2[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (copy_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", holder2[2]);
		exit(99);
	}

	while ((read_count = read(main_file, buf, BUFFER_SIZE)) > 0)
	{
		if (write(copy_file, buf, read_count) != read_count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", holder2[2]);
			exit(99);
		}
	}
	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", holder2[1]);
		exit(98);
	}
	if (close(main_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", main_file);
		exit(100);
	}
	if (close(copy_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copy_file);
		exit(100);
	}
	return (0);
}
