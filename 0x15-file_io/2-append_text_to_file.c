#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
*
* @filename: name of the file which is a pointer
* @text_content: content of the file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	/*open file (append mode) */
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	/*write text to file */
	i = write(file, text_content, strlen(text_content));
	if (i == -1 || i != strlen(text_content))
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
