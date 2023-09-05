#include"main.h"
#include<stdio.h>
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
	FILE *fp;

	if (fd == -1)
	{
		return (-1);
	}
	else
	{
		close(fd);
		fp = fopen(filename, "a");
		if ((fp == NULL) | (filename == NULL))
		{
			return (-1);
		}
		else
		{
			fprintf(fp, "%s", text_content);
			fclose(fp);
			return (1);
		}
	}
}
