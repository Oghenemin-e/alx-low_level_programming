#include "main.h"

/**
 * wildcmp - compares two strings and returns 1
 * if they can be considered identical
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0') /* * at the end of s2 */
			return (1);
		if (*s1 == '\0') /* s1 is empty, s2 is not */
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}
	if (*s1 != *s2)
		return (0);
	if (*s1 == '\0')
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}
