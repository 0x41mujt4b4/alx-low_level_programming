#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text content to a file
 * @filename: the name of the file to append to
 * @text_content: the text content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor */
	ssize_t bytes_written; /* number of bytes written */

	/* check if filename is NULL */
	if (filename == NULL)
	{
		/* invalid filename */
		return (-1);
	}

	/* open the file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		/* file does not exist or cannot be opened */
		return (-1);
	}

	/* check if text_content is NULL */
	if (text_content != NULL)
	{
		/* write the text content to the file */
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			/* writing failed */
			return (-1);
		}
	}

	/* close the file */
	close(fd);

	/* return success */
	return (1);
}

