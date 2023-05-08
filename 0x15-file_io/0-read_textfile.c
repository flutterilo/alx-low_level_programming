#include "main.h"

/**
* read_textfile - read text file and print to the standart output
* @letters: number of little it's should read and print
* @filename: file name
* Return: actual number it's could print and returned
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t num = 0;

	if (!filename)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	while (!feof(fp) && (size_t)num < letters)
	{
		num++;
		_putchar(fgetc(fp));
	}
	return (num);
}
