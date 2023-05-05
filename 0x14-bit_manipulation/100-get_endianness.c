#include "main.h"

/**
* get_endianness - checks the endianess
* Return: 1 if little endian, 0 if big endian
*/

int get_endianness(void)
{
	int num = 1;
	char *endians;

	endians = (char *)&num;
	if (*endians == 1)
		return (1);
	return (0);
}
