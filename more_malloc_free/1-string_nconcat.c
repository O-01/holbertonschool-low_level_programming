#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two given strings s1 & n bytes of s2
 * @s1: object string 1
 * @s2: object string 2
 * @n: number of bytes of s2 to concatenate
 * Return: pointer to result of concatenation in resp. freshly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int iter = 0, s2_iter = 0;
	unsigned int s1_len = strlen(s1), n_len = n + 1;
	char *string = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	string = malloc((sizeof(char) * s1_len) + n_len);
	if (!string)
		return (NULL);
	for (; s1[iter]; ++iter)
		string[iter] = s1[iter];
	for (; s2_iter < n; ++s2_iter, ++iter)
		string[iter] = s2[s2_iter];
	string[iter] = '\0';
	return (string);
}
