#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: The character to be checked
 * Return: f or alphabet character or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
