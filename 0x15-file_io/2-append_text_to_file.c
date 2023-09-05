#include"main.h"
#include<fcntl.h>
#include<unistd.h>
/**
 * append_text_to_file - appends text to a file
 * @filename: Name of the file
 * @text_content: what to be appended
 * Return: 1 if successful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_APPEND);

	if ((fd == -1) | (filename == NULL))
	{
		write(2, "open", 4);
		return (-1);
	}
	else
	{
		write(fd, text_content, 1024);
		close(fd);
		return (1);
		}
	}
}
