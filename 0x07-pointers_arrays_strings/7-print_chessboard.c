#include "main.h"

/**
* print_chessboard -  prints the chessboard
* @a: parameter
*/

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (a[i][8] != '\0')
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
