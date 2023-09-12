#include "main.h"
/**
 * _islower - function that checks for the lowercase character
 * @c: parameters to be character checked
 * Return: 1 and 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
