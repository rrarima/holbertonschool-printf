#include "main.h"

/**
 *_strcpy - a function to copy a string from one location to another
 * @dest: a location to copy a string to
 * @src: a string to be copied
 * Return: the destination address
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	i = 0;
	len = _strlen(src);

	while (i <= len)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}

/**
 * _strlen - a function to return the length of a string
 * @s: a string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i = i + 1;
		s = s + 1;
	}
	return (i);
}

/**
 *_strcat - a function to concatenate two srings togeather
 * @dest: the first and resultant string
 * @src: the secondary string to be apended
 * Return: the destination address
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	i = 0;
	len = _strlen(dest);

	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i = i + 1;
		len = len + 1;
	}
	return (dest);
}

/**
 *_strncpy - copy the first N elements of one string to another
 * @dest: the first and resultant string
 * @src: the source string
 * @n: the quantity of chars to be copied
 * Return: the destination address
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
		{
		dest[i] = src[i];
		i = i + 1;
		}

	while (i < n)
	{
		dest[i] = '\0';
		i = i + 1;
	}

	return (dest);
}
