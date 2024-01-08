#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k = 0;

	while (*s)
	{
		for (; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
