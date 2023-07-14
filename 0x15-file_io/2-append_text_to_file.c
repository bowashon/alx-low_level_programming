#include "main.h"
/**
 * append_text_to_file - function that appends texts to a file
 * @filename: represent the name of the file
 * @text_content: content to write to the file
 * Return: return 1 if success and -1 if error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	size_t len = strlen(text_content), text_written = 0i;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (len)
	{
		text_written = write(file, text_content, len);
	}
	if (text_written != len)
	{
		return (-1);
	}

	close(file);
	return (1);
}
