#include "main.h"

/**
 * read_textfile - A Function To Read From A File
 * @filename: A Pointer To The File
 * @letters: Number of Bytes To Read
 *
 * Return: The Number of Printed File
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t n;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (-1);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	n = read(file, &buffer[0], letters);
	n = write(STDOUT_FILENO, &buffer[0], n);

	close(file);

	return (n);
}
