#include "main.h"

/**
 * read_textfile - it opens, read, write and close a
 *		file into STDOUT
 * @filename: a pointer to the name of the file to be 
 *		written to STDOUT
 * @letter: the length to be read and written
 *
 * Return: 0 if the file could not be accessed.
 *	0 if the filename is NULL.
 *	0 if write fails or does not write what is expected
 *	if success, return the expected size(letters)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wt;
	char *buf;

	if (!filename)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	if (!buf)
	{
		return (0);
	}

	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wt = write(STDOUT_FILENO, buf, rd);

	if (wt != rd || op == -1 || rd == -1 || wt == -1)
	{
		free(buf);
		return (0);
	}
	free (buf);
	close(op);

	return (wt);
}
