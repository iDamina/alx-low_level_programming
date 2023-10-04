#include "main.h"
/**
  *read_textfile - a function that reads text file
  *
  *@filename: the file name
  *@letters: number of letters
  *
  *Return: number of letters or 0 if it fails
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytesRead = 0;

	/* Open the file for reading*/
	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0); /* Return 0 on failure */
	}

	/* Allocate memory for a buffer to hold the file contents */
	buffer = (char *)malloc(letters + 1); /* +1 for null terminator */
	if (buffer == NULL)
	{
		fclose(file);
		return (0); /* Return 0 on memory allocation failure*/
	}

	/* Read the specified number of letters from the file*/
	bytesRead = fread(buffer, sizeof(char), letters, file);
	if (bytesRead < 0)
	{
		free(buffer);
		fclose(file);
		return (0); /* Return 0 on read error*/
	}

	/* Null-terminate the buffer to make it a valid C string*/
	buffer[bytesRead] = '\0';

	/* Print the contents to standard output*/
	write(STDOUT_FILENO, buffer, bytesRead);

	/* Clean up and close the file */
	free(buffer);
	fclose(file);

	return (bytesRead); /* Return the number of letters read*/
}
