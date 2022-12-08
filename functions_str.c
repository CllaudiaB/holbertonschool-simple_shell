#include "shell.h"

/**
 *_strdup - function that returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as a paramete
 *@str: parameter of function
 *
 *Return: char
 */

char *_strdup(char *str)
{
	char *p;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}
	p = malloc(len + 1);

	for (i = 0; i < len; i++)
	{
		if (p == NULL)
			return (NULL);
		p[i] = str[i];
	}
	return (p);
}

/**
 *_strcat - function that concatenates two strings
 *@dest: parameter of the function
 *@src: parameter of the function
 *Return: char
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0, len_src = 0;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	while (src[len_src] != '\0')
	{
		dest[len_dest] = src[len_src];
		len_dest++;
		len_src++;
	}
	return (dest);
}

/**
 *_strlen -function that returns the length of a string
 *@s: parameter of the function
 *
 *Return: integer
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 *_strcpy -  function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *@dest: parameter of the function
 *@src: parameter of the function
 *Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}

/**
 * _strcmp - compares two strings exactly like strcmp
 *
 * @s1: parameter of the function
 * @s2: parameter of the function
 *
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}
