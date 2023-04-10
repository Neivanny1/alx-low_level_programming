#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a textfile and prints it to POSIX output
 * @filename: Points to location of file
 * @letters: number of letters to read and print
 *
 * Return: 0 if file can't be opened, read or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        int opened_File, read_Bytes;
        char *buffer;

        if (filename == NULL)
                return (0);

        buffer = malloc(letters * sizeof(char));
        if (buffer == NULL)
                return (0);

        opened_File = open(filename, O_RDONLY);
        if (opened_File == -1)
        {
                free(buffer);
                return (0);
        }

        read_Bytes = read(opened_File, buffer, letters);
        if (read_Bytes == -1)
        {
                free(buffer);
                close(opened_File);
                return (0);
        }

        write(STDOUT_FILENO, buffer, read_Bytes);

        free(buffer);
        close(opened_File);

        return (read_Bytes);
}

