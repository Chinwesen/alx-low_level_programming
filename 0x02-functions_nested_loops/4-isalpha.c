#include "main.h"
/**
 * _isalpha - checks for alpabets
 * @c: the character to check
 * Return: 1 on success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
