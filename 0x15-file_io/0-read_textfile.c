#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
  *read_textfile-function that reads a text file and prints it
  * to the POSIX standard output.
  * @filename: file name
  * @letters: number of letters that it holds
  * Return: actual number of letters
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, by;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(fd, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(fd);
	by = write(STDOUT_FILENO, buf, i);
	if (by < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (by);
}
