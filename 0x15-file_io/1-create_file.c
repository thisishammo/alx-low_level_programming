#include"main.h"
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
/**
 * create_file - Creates a file
 * @filename: Name of a file
 * @text_content: what to be written to the file
 * Return:: 1 if successuful
 */
int create_file(const char *filename, char *text_content)
{
	mode_t old_mask = umask(0);
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);

	if (fd == -1 | filename == NULL)
	{
		write(2, "open", 4);
		umask(old_mask);
		return (-1);
	}
	else
	{
		dprintf(fd, "%s", text_content);
		if (chmod(filename, 0600) == -1)
		{
			write(2, "chmod", 5);
			umask(old_mask);
			return (-1);
		}
		else
		{
			close(fd);
			umask(old_mask);
			return (1);
		}
	}
}
