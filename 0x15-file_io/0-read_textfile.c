#include"main.h"
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
/**
 * read_textfile - reads the contents of a file
 * @filename: Name of file
 * @letters: number of letters to be read
 * Return: Number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = (char *)malloc(1024 * sizeof(char));
	int file_descriptor = open(filename, O_RDONLY);

	if ((file_descriptor < 0) | (filename == NULL))
	{
		write(2, "open", 4);
		return (-1);
	}
	else
	{
		ssize_t bytes = read(file_descriptor, buffer, letters);

		if (bytes < 0)
		{
			write(2, "read", 4);
			return (-1);
		}
		write(STDOUT_FILENO, buffer, 1024);
		close(file_descriptor);
		return (bytes);
	}
}
