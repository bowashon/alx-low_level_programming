#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: the name of the file
 * @text_content: content of the file
 * Return: returns 1 on success and - on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	size_t len = 0;
	ssize_t text_written;

	if (!filename)
	{
		return (-1);
	}
	if (text_content)
	{
		len = strlen(text_content);
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		perror("open");
		return (-1);
	}
	text_written = write(file, text_content, len);
	if (text_written == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
