#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: text_content to write on the file
 * Return: return 1 if success and -1 if error
 */
int create_file(const char *filename, char *text_content)
{
	int file, bytes_written;
	size_t len = 0;

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
		return (-1);
	}
	if (len > 0)
	{
		bytes_written = write(file, text_content, len);
		if (bytes_written == -1)
		{
			return (-1);
		}
	}
	return (1);
}
