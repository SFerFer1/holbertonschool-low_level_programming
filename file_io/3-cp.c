#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void call_exit(int argc, char *argv[], int *fd_from, int *fd_to);
int main(int argc, char *argv[])
{
int fd_from, fd_to;
char buffer[1024];
ssize_t bytes_read, bytes_written;

call_exit(argc, argv, &fd_from, &fd_to);

while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0) {
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd_from);
close(fd_to);
exit(99);
}
}
if (bytes_read == -1)
{
	close(fd_from);
	close(fd_to);
	exit(0);
}
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
return (0);
}

void call_exit(int argc, char *argv[], int *fd_from, int *fd_to)
{
	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
*fd_from = open(argv[1], O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

*fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (*fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(*fd_from);
exit(99);
}
close(*fd_from);
close(*fd_to);
}
