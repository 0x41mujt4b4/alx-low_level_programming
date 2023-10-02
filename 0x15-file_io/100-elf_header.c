#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * error_handling - handles errors for file operations
 * @str: the error message to print if an error occurs
 *
 * This function checks if a file operation was successful by checking if the
 * file descriptor is less than zero. If it is, it prints an error message and
 * exits with a specified exit code.
 */
void error_handling(char *str)
{
    dprintf(2, "Error: %s\n", str);
    exit(98);
}

/**
 * main - displays the information contained in the ELF header at the start of an ELF file
 * @argc: the number of command-line arguments
 * @argv: an array of pointers to the command-line arguments
 *
 * This program reads the ELF header from an ELF file and displays the information.
 *
 * Return: 0 on success, or one of several non-zero codes on error
 */
int main(int argc, char **argv)
{
    int fd;
    ssize_t n;
    Elf64_Ehdr ehdr;

    if (argc != 2)
    {
        dprintf(2, "Usage: elf_header elf_filename\n");
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        error_handling("Can't open file");

    n = read(fd, &ehdr, sizeof(ehdr));
    if (n != sizeof(ehdr))
        error_handling("Can't read ELF header");

    if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
        ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
        error_handling("Not an ELF file");

    printf("Magic:   %.2x %.2x %.2x %.2x\n", ehdr.e_ident[EI_MAG0], ehdr.e_ident[EI_MAG1],
           ehdr.e_ident[EI_MAG2], ehdr.e_ident[EI_MAG3]);
    printf("Class:                             %s\n", ehdr.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("Data:                              %s\n", ehdr.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version:                           %d (current)\n", ehdr.e_ident[EI_VERSION]);
    printf("OS/ABI:                            UNIX - System V\n");
    printf("ABI Version:                       %d\n", ehdr.e_ident[EI_OSABI]);
    printf("Type:                              %s\n", ehdr.e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown");
    printf("Entry point address:               0x%lx\n", ehdr.e_entry);

    close(fd);

    return (0);
}
