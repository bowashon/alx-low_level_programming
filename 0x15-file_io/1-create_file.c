#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to the file to be created
 * @text_content: content to write to the file
 * Return: 1 on success and -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	size_t len = strlen(text_content), text_written = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		return (-1);
	}
	if (len)
	{
		text_written = write(file, text_content, len);
	}
	if (text_written != len)
		return (-1);

	close(file);
	return (1);
}
