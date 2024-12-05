#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> 
void  main(int argc, char *argv[])
{
const char *from = argv[1];
const char *to = argv[2];	
	
call_exit(argc, argv, &fd_from, &fd_to);

*op_to = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (*fd_to == -1)
	{
        dprintf("Error: Can't write to%s\n", to);
        close(*op_to);
	}







}    

void call_exit(int argc, char *argv[], int *fd_from, int *fd_to)
{
const char *from;
const char *to;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
*from = argv[1];
*to = argv[2];
*op_from = open(from, O_RDONLY);
	if (*op_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}

*op_to = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (*fd_to == -1)
{
dprintf("Error: Can't write to%s\n", to);
exit(99);
}
close(*op_to);

}
