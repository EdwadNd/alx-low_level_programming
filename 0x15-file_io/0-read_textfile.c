#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
  *read_textfile-function that reads a text file and prints it
  * to the POSIX standard output.
  * @filename: file name
  * @letters: number of letters that it holds
  * Return: actual number of letters
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t nbytes;
	ssize_t bytes_read;
	int fd;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);
	
	bytes_read = read(fd, buf, letters);


