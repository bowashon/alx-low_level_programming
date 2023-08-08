#include "main.h"
/**
 * exit_with_error - function that exit the code with error message
 * @message: pointer to the message
 * @code: code to exit
 */
void exit_with_error(const char *message, int code)
{
	dprintf(2, "%s\n", message);
	exit(code);
}
/**
 * main - program that copies the content of a file to another file.
 * @argc: command line arguments.
 * @argv: vector arguments.
 * Return: return 1 on success.
 */
int main(int argc, char **argv)
{
	int file1, file2;
	ssize_t bytes_read = 0, bytes_written;
	char buffer[1024];

	if (argc != 3)
		exit_with_error("Usage: cp file_from file_to ", 98);

	file1 = open(argv[1], O_RDONLY);

	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	while ((bytes_read = read(file1, buffer, sizeof(buffer))))
	{
		bytes_written = write(file2, buffer, bytes_read);
		if (bytes_read == -1)
		{
			close(file1);
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(99);
		}
		if (bytes_written == -1)
		{
			close(file1);
			close(file2);
			dprintf(2, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(file1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if (close(file2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return (0);
}
