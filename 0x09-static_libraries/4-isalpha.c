#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: i if c is a letter, o if it is not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
