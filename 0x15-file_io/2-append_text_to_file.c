#include "main.h"

/**
 * _strlen - A Function To Get The Length of The String
 * @s: The String
 *
 * Return: The Length of The String
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;

	return (i);
}

/**
 * append_text_to_file - A Function ....
 * @filename: The Name of Created File
 * @text_content: The Content of The Text To Write
 *
 * Return: 1 or 0
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes = 0, len = _strlen(text_content);


	if (!filename)
	return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	return (-1);

	if (len)
	bytes = write(file, text_content, len);

	close(file);

	return (bytes == len ? 1 : -1);
}
