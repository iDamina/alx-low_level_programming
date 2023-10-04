#include "main.h"
/**
  *create_file - function that creates file
  *
  *@filename: name of the file
  *@text_content: string to write to the file(NULL terminated)
  *
  *Return: 1 on success and -1 when failed
  */
int create_file(const char *filename, char *text_content)
{
	int result = 1, file, counter = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	/*open the file for writing */
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1); /* return -1 for failure*/
	/*check and write text content to the file */
	if (text_content != NULL)
	{
		while (text_content[counter])
			counter++;

		result = write(file, text_content, counter);
	}
	if (result == -1)
		return (-1);
	close(file);

	return (1);
}
