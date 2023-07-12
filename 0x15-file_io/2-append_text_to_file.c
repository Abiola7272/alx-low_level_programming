#include "main.h"

/**
 * append_text_to_file - It appends text at the end of a file.
 * @filename: This is a pointer that points to the name of the file.
 * @text_content: The string to be added to the end of the file.
 * Return: -1 if the function fails or filename is NULL,
 *         -1 if the file does not exist the user lacks write permissions,
 *         Else, it returns: 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	int w;
	int nur = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (nur = 0; text_content[nur];)
		{
			nur++;
		}
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, nur);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);
	return (1);
}
