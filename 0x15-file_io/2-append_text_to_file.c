#include "main.h"
/**
 * _strlen - function that calculates the length of a string
 * @s: the string to calculate its length
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
 * append_text_to_file - function that appends text to a file
 * @filename: pointer to the file
 * @text_content: text_content to append
 * Return: return 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, bytes_written = 0, len = 0;

	if (!filename)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	len = _strlen(text_content);
	if (len > 0)
	{
		bytes_written = write(file, text_content, len);
	}
	if (bytes_written == -1)
	{
		close(file);
		return (-1);
	}
	return (1);
}
