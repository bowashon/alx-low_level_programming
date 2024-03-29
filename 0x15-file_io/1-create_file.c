#include "main.h"
/**
 * _strlen - function that calculates the length of a string
 * @s: a pointer to a string
 * Return: return the length of the string or -1 if otherwise
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
	{
		return (-1);
	}
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

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
		len = _strlen(text_content);
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
