#include "main.h"

/**
 * str_concat - concatenates two given strings s1 & s2
 * @s1: object string 1
 * @s2: object string 2
 * Return: pointer to result of concatenation in resp. freshly allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int iter = 0, s2_iter = 0;
	unsigned int s1_len = strlen(s1), s2_len = strlen(s2) + 1;
	char *string = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	string = malloc((sizeof(char) * s1_len) + (sizeof(char) * s2_len));
	if (!string)
		return (NULL);
	for (; s1[iter]; ++iter)
		string[iter] = s1[iter];
	for (; s2[s2_iter]; ++s2_iter, ++iter)
		string[iter] = s2[s2_iter];
	string[iter] = '\0';
	return (string);
}
