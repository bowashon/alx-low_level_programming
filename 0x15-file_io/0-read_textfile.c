#include "main.h"
/**
 * read_textfile - function that reads file and prints it to the POSIX Standout
 * output.
 * @filename: name of the file to open
 * @letters: the number of letters to read
 * Return: return the number of characters it read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t text_read, text_written;
	char *buffer;
	int file;

	if (!filename)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buffer = (char *)malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	text_read = read(file, buffer, letters);
	if (text_read == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	text_written = write(STDOUT_FILENO, buffer, text_read);
	if (text_written != text_read)
	{
		free(buffer);
		close(file);
		return (0);
	}
	free(buffer);
	close(file);

	return (text_written);
}
