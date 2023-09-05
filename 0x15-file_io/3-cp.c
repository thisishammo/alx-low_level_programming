#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
/**
 * main - copies contents of a file to another
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	char *buffer = (char *)malloc(1024 * sizeof(char));
	int fd, fd1;

	if (argc != 3)
	{
		perror("Usage: cp file_from file_to\n");
		exit(97);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
		{
			perror("Error: Can't read from file");
			write(2, argv[2], 1024);
			exit(98);
		}
		else
		{
			mode_t old_mask = umask(0);

			fd1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 664);
			read(fd, buffer, 1024);
			dprintf(fd1, "%s", buffer);
			umask(old_mask);
			close(fd);
			close(fd1);
			return (0);
		}
	}
}
