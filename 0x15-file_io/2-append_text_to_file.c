#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl, b_w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fl = open(filename, O_WRONLY | O_APPEND);
	if (fl == -1)
		return (-1);

	b_w = write(fl, text_content, len);
	if (b_w == -1 || b_w != len)
	{
		close(fl);
		return (-1);
	}

	close(fl);

	return (1);
}
