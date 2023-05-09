#include "main.h"
#include <stdio.h>


/**
 * close_file - an helper funtion to close files
 * @filedesc: the file descriptor from the open func
 *
 * Return: nothing
 */
void close_file(int filedesc)
{
	int cs;

	cs = close(filedesc);

	if (cs < 0)
	{
		if (cs < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedesc);
		exit(100);
	}
}

/**
 * main - copies content of a file into another
 *
 * @argc: argument count
 * @argv: array of poinyers to the arguments passed
 *
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	int op_1, op_2, rd, wt;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	op_1 = open(argv[1], O_RDONLY);
	if (op_1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buf = malloc(sizeof(char) * 1024);
	if (!buf)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s/n", argv[2]);
		exit(99);
	}
	rd = read(op_1, buf, 1024);
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	op_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wt = write(op_2, buf, rd);
	if (wt < 0 || rd != wt)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s/n", argv[2]);
		close(op_1);
		free(buf);
		exit(99);
	}
	close_file(op_1);
	close_file(op_2);
	return (0);
}
