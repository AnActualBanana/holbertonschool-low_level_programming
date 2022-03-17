#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to append text to
 * @text_content: the string to add to the end of the file
 * Return: -1 on failure, 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op = open(filename, O_WRONLY | O_APPEND);
	int wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		op = open(filename, O_RDONLY);
		if (op != -1)
			return (1);
		else
			return (-1);
	}
	wr = write(op, text_content, strlen(text_content));
	if (wr == -1 || op == -1)
		return (-1);
	close(op);
	return (1);
}
