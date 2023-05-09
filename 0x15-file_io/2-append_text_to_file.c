#include "main.h"

/**
 * append_text_to_file - adds to the content of an
 *			already existing file
 *
 * @filename: a pointer to the file to be created
 * @text_content: the text to be appended
 *
 * Return: 1 for success a:d -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wt, size;

	if (!filename)
	{
		return (-1);
	}

	op = open(filename, O_WRONLY | O_APPEND);

	if (op < 0)
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
		wt = write(op, text_content, size);
		if (op < 0 || wt < 0)
		{
			return (-1);
		}
	}

	close(op);

	return (1);
}
