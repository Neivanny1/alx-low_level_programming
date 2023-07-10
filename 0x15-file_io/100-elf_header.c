#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

void print_elf_header_info(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("Class: %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");

	printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");

	printf("Version: %d\n", header->e_ident[EI_VERSION]);

	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);

	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	printf("Type: %d\n", header->e_type);

	printf("Entry point address: %lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Failed to open file");

	bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
	if (bytes_read == -1)
		print_error("Failed to read ELF header");

	if (bytes_read != sizeof(Elf64_Ehdr) || header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Not an ELF file");

	print_elf_header_info(&header);

	close(fd);

	return 0;
}

