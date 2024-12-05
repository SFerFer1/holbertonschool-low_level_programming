#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * read_textfile - check the code.
 *
 *@filename: Tamao del trianguo.
 *@letters: Tamao del trianguo.

 * Return: Always EXIT_SUCCESS.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *let;
int let;
ssize_t readed;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

*let = malloc(letters);
if (let == NULL)
{
close(fd);
return (0);
}
readed = read(fd, buffer, letters);
if (readed == -1)
{
free(buffer);
close(fd);
return (0);
}
ssize_t written = write(POSIX, let, readed);
if (written == -1 || written != readed)
{
free(buffer);
close(fd);
return 0;
}
free(buffer);
close(fd);
return bytesread
}
