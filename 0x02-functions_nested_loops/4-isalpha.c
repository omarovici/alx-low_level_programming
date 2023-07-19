#include "main.h"

/**
 * _isalpha - checks for alphabetic charact
 * @c: bla bla bla
 * Return: 1 if c is a letter, 0 other
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
