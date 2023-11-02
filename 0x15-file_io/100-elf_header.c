#include "main.h"

#define BUFFER_SIZE 128


/**
 * main - Displays the information contained in the ELF header of a given file.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int fd;
	unsigned char e_ident[BUFFER_SIZE];

	/* Check if the correct number of arguments is provided */
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	/* Open the file in read-only mode */
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file\n");
		exit(98);
	}

	/* Read the ELF header */
	if (read(fd, e_ident, BUFFER_SIZE) != BUFFER_SIZE)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file\n");
		exit(98);
	}

	/* Print the ELF header information */
	printf("ELF Header:\n");
	print_magic(e_ident);
	print_class(e_ident);
	print_data(e_ident);
	print_version(e_ident);
	print_osabi(e_ident);
	print_abiversion(e_ident);
	print_type(*(unsigned short *)(e_ident + 16));
	print_entry(*(unsigned long int *)(e_ident + 24));

	/* Close the file descriptor and exit successfully */
	close(fd);
	return 0;
}

/**
 * print_magic - Print the ELF magic numbers.
 * @e_ident: A pointer to an array of ELF identification bytes.
 */

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
}

/**
 * print_class - Prints the ELF class.
 * @e_ident: A pointer to an array of ELF identification bytes.
 */

void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	if (e_ident[4] == 1)
	printf("ELF32\n");
	else if (e_ident[4] == 2)
	printf("ELF64\n");
}

/**
 * print_data - Prints the data encoding.
 * @e_ident: A pointer to an array of ELF identification bytes.
 */

void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	if (e_ident[5] == 1)
	printf("2's complement, little endian\n");
	else if (e_ident[5] == 2)
	printf("2's complement, big endian\n");
}

/**
 * print_version - Prints the ELF version.
 * @e_ident: A pointer to an array of ELF identification bytes.
 */

void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d (current)\n", e_ident[6]);
}

/**
 * print_osabi - Prints the OS/ABI information.
 * @e_ident: A pointer to an array of ELF  identification bytes.
 */

void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[7])
	{
		/* Cases for different OS/ABI values */
		/* Default case for unknown values */
		default:
			printf("<unknown: %02x>\n", e_ident[7]);
	}
}

/**
 * print_abiversion - Printts the ABI version.
 * @e_ident: A pointer to an array of ELF identification bytes.
 */

void print_abiversion(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[8]);
}

/**
 * print_type - Prints the ELF type.
 * @e_type: An unsigned short representing the ELF type.
 */

void print_type(unsigned short e_type)
{
	printf("  Type:                              ");
	switch (e_type)
	{
		/* Cases for different ELF types */
		/* Default case for unknown types */
		default:
			printf("<unknown: %02x>\n", e_type);
	}
}

/**
 * print_entry - Prints the entry point address.
 * @e_entry: An unsigned long integer representing the entry point address.
 */

void print_entry(unsigned long int e_entry)
{
	printf("  Entry point address:               %lx\n", e_entry);
}
