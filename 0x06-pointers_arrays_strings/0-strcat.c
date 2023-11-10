#include "main.h"

/* This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
