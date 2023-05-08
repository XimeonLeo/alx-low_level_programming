#include "main.h"

/**
 * create_file - creates a new file and write into it
 *
 * @filename: a pointer to the file to be created
 * @text_content: what is to be written in the file
 *
 * Return: on success return (1)
 *	if file was not created (-1}
 *	if filename is NULL (-1)
 */

int create_file(const char *filename, char *text_content)
{
	int op, wt, size;

	if (!filename)
	{
		return (-1);
	}

	if (text_content)
	{
		size = 0;
		while (text_content[size])
		{
			size++;
		}
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(op, text_content, size);

	if (op == -1 || wt == -1)
	{
		return (-1);
	}

	close(op);
	return (1);
}
