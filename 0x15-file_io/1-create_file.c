#include "main.h"

/**
 * create_file - It create a file.
 * @filename: Pointer that points to the name of the file to be created.
 * @text_content: Pointer that points to a string that writes to the file.
 * Return: -1 if the function fails, Otherwise 1
 */
int create_file(const char *filename, char *text_content)
{
	int pd;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	pd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(pd, text_content, len);

	if (pd == -1 || w == -1)
	{
		return (-1);
	}

	close(pd);

	return (1);
}

