#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * read_textfile - check the code.
 *
 *@filename: Tamao del trianguo.
 *@letters: Tamao del trianguo.
 *
 * Return: Always EXIT_SUCCESS.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *let;
ssize_t readed;
ssize_t written;
int fd;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

let = malloc(letters);
if (let == NULL)
{
close(fd);
return (0);
}
readed = read(fd, let, letters);
if (readed == -1)
{
free(let);
close(fd);
return (0);
}
written = write(STDOUT_FILENO, let, readed);
if (written == -1 || written != readed)
{
free(let);
close(fd);
return (0);
}
free(let);
close(fd);
return (readed);
}
