#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - creates a file and writes text content to it
 * @filename: the name of the file to create
 * @text_content: the text content to write to the file
 *
 * Return: 0 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int result;

	fp = fopen(filename, "w");
	if (fp == NULL)
		return (-1);
	result = fputs(text_content, fp);
	if (result == EOF)
		return (-1);
	fclose(fp);
	return (1);
}
