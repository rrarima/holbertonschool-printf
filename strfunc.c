#include <stdlib.h>
#include <stdio.h>
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
/**
 * insertString - insert one string into another
 * @str: string to have another string inserted into
 * @ins: string to _be_ inserted
 * @pos: the location to insert the string
 * @trim: the quantity of chars to be removed at the insertion site
 * to use with % operators just set trim to 2
 * Return: the new string
 */
char *insertString (char *str, char *ins, int pos, int trim)
{
	char *res;

	res = malloc((_strlen(str) + _strlen(ins) - trim + 1) * sizeof(char));
	_strncpy(res, str, pos);
	res[pos] = '\0';
	_strcat(res, ins);
	_strcat(res, str + (pos + trim));
	return (res);
}
