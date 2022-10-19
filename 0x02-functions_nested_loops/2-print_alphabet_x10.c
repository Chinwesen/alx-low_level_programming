#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 */

void print_alphabet_x10(void)
{
	int count;
	char a;

	for (count = 0; count <= 9; count++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
