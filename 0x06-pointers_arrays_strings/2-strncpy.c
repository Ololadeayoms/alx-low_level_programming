#include "main.h"
/**
 * _strncpy - C functions that copies a string
 * If the length of the source string is less than the maximum byte number,
 * the remainder of the destinatin is filled with null bytes.
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: maximum number of byte copied
 * Returns: returns null
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
