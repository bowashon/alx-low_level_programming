#include "main.h"
/**
 * creat_file - function that creates a file
 * @filename: pointer to the file to be created
 * @text_content: content to write to the file
 * Return: 1 on success and -1 on error
 */
int creat_file(const char *filename, char *text_content)
{
	int file, text_written;
	int len = strlen(text_content), i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (i < len)
		{
			text_written = write(file, &text_content[i], 1);
			if (text_written == -1)
				return (-1);
			i++;
		}
	}
	if (text_written != len)
		return (-1);

	close(file);
	return (1);
}
