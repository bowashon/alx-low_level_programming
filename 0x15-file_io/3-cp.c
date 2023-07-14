#include "main.h"
/**
 * main - program that copies the content of a file to another
 * @argc: command line argument.
 * @argv: pointer ot thr command line argument
 * Return: return 0 alwals success.
 */
int main(int argc, char **argv)
{
	int file1, file2, text_read;
	char *buffer[SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);

	if (file1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
	| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((text_read = read(file1, buffer, SIZE)) > 0)
	{
		write(file2, buffer, text_read);
	}
	if (text_read == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[1]), exit(99);
	}
	if (close(file1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file1), exit(100);
	}
	if (close(file2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return (0);
}
