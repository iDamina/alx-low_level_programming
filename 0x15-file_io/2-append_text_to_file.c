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
	int i = 0, file;

	if (filename == NULL)
		return (-1); /*checks if file is empty*/

	if (text_content == NULL)
		text_content = ""; /*checks if text content is empty */


	while (text_content[i] != '\0')
	{
		i++;
	}
	/* open file */
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);

}
