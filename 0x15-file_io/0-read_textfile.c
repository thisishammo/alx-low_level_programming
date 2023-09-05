#include"main.h"
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
/**
 * read_textfile - reads the contents of a file
 * @filename: Name of file
 * @letters: number of letters to be read
 * Return: Number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1024];
	int file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor < 0 | filename == NULL)
	{
		perror("open");
		return (-1);
	}
	else
	{
		ssize_t bytes = read(file_descriptor, buffer, letters);

		if (bytes < 0)
		{
			perror("read");
			return (-1);
		}
		close(file_descriptor);
		return (bytes);
	}
}
