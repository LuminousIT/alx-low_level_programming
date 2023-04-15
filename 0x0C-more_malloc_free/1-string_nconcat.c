#include "main.h"

/**
 * string_nconcat -  function that concatenates two strings.
 *
 * @s1: string1
 * @s2: string2
 * @n: n bytes
 *
 * Return: int
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int concat_index = 0, lens2 = 0, lens1 = 0, idx = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s2[lens1] != '\0'; lens1++)
	;
	for (; s2[lens2] != '\0'; lens2++)
	;
	if (n > lens2)
		ptr = malloc(sizeof(char *) * (lens1 + lens2 + 1));
	else
		ptr = malloc(sizeof(char) * (lens1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[concat_index] != '\0')
	{
		ptr[concat_index] = s1[concat_index];
		concat_index++;
	}
	if (lens2 <= n)
	{
		while (s2[idx] != '\0')
		{
			ptr[concat_index++] = s2[idx];
			idx++;
		}
	}
	else
	{
		while (idx < n && s2[idx] != '\0')
		{
			ptr[concat_index] = s2[idx++];
			concat_index++;
		}
	}
	ptr[concat_index] = '\0';
	return (ptr);
}
