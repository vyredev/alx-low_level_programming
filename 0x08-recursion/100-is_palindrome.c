#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare - compares string character
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Return: none
 */
int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome -  sees if string is palindrome
 * @s: string
 * Return: 1 id s is palindrome, 0 if it's not
 */
int is _palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
