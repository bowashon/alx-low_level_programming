#include "main.h"
/**
 * read_textfile - function that read file and writes it to stdout.
 * @filename: the name of the filename.
 * @letters: the number of letters to read.
 * Return: return the number of letter it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file;
	ssize_t letters_read, letters_written;

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	letters_read = read(file, buffer, letters);

	if (letters_read <= 0)
	{
		free(buffer);
		close(file);
		return (0);
	}

	buffer[letters_read] = '\0';

	letters_written = write(STDOUT_FILENO, buffer, letters_read);

	if (letters_written != letters_read)
	{
		free(buffer);
		close(file);
		return (0);
	}
	free(buffer);
	close(file);
	return (letters_written);
}
