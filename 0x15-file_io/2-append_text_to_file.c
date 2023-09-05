#include"main.h"
#include<fcntl.h>
#include<unistd.h>
/**
 * _strlen - counts the number of characters in
 * a string
 * @a: array of characters
 * Return: No. of characters
 */
int _strlen(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * append_text_to_file - appends text to a file
 * @filename: Name of the file
 * @text_content: what to be appended
 * Return: 1 if successful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);

	if ((fd == -1) | (filename == NULL))
	{
		write(STDERR_FILENO, "Error: filename is NULL\n", 25);
		return (-1);
	}
	else
	{
		write(fd, text_content, _strlen(text_content));
		close(fd);
		return (1);
	}
}
