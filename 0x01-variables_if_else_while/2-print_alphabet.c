#include <stdio.h>
/**
 * main - Entry Point
 * Return: always 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	return (0);
}
