#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
	int i = 0;

	/* If the first character is lowercase, convert it to uppercase */
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 'a' + 'A';
	}

	/* Loop through the string until null terminator is encountered */
	while (str[i] != '\0')
	{
		/* Check if the current character is a separator */
		if (str[i-1] == ' ' || str[i-1] == '\t' || str[i-1] == '\n' ||
				str[i-1] == ',' || str[i-1] == ';' || str[i-1] == '.' ||
				str[i-1] == '!' || str[i-1] == '?' || str[i-1] == '"' ||
				str[i-1] == '(' || str[i-1] == ')' || str[i-1] == '{' || str[i-1] == '}')
		{
			/* Move to the next character */
			i++;

			/* If the next character is lowercase, convert it to uppercase */
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 'a' + 'A';
			}
		}
		else
		{
			i++;

			/* If the next character is uppercase, convert it to lowercase */
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 'a' - 'A';
			}
		}
	}

	return (str);
}
