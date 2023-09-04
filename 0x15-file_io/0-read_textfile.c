#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Description: This function reads a text file and prints its content to
 * the standard output.
 * Return: The actual number of letters read
 *  and printed, or 0 if an error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, let, w;
char *text;

text = malloc(letters);
if (text == NULL)
return (0);

if (filename == NULL)
return (0);

file = open(filename, O_RDONLY);

if (file == -1)
{
free(text);
return (0);
}

let = read(file, text, letters);

w = write(STDOUT_FILENO, text, let);

close(file);

return (w);
}
