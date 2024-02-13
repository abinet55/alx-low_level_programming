#include "main.h"

/**
* read_textfile - reads a text file and print
* @filename: the file name
* @letters: numbers of letters printed
* Return: numbers of letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int flde;
ssize_t numrd, numwr;
char *buff;
if (!filename)
return (0);
flde = open(filename, O_RDONLY);
if (flde == -1)
return (0);
buff = malloc(sizeof(char) * (letters));
if (!buff)
return (0);
numrd = read(flde, buff, letters);
numwr = write(STDOUT_FILENO, buff, numrd);
close(flde);
free(buff);
return (numwr);
}
