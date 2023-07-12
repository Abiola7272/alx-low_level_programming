#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- It reads the text file printed to Standard Output (STDOUT).
 * @filename: Already read text file.
 * @letters: The number of letters to be read on the text file.
 * Return: w- It is the actual number of bytes read and printed.
 *	0 is retuned when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *nuf;
	ssize_t md;
	ssize_t w;
	ssize_t t;

	md = open(filename, O_RDONLY);
	if (md == -1)
		return (0);

	nuf = malloc(sizeof(char) * letters);
	t = read(md, nuf, letters);
	w = write(STDOUT_FILENO, nuf, t);

	free(nuf);
	close(md);
	return (w);
}
