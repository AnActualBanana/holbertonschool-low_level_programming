#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: a string to write to the file
 * Return: 1 is success, -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int op = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	int wr;
	int cl;

	if (filename == NULL)
		return (-1);
	wr = write(op, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	cl = close(op);
	if (wr == -1 || op == -1 || cl == -1)
		return (-1);
	return (1);
}
