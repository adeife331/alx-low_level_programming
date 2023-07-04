#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @src: The string to be appended.
 * @dest: The string to be modified.
 * Return: The concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	
	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
