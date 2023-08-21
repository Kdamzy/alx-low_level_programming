#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer.
 */

int _atoi(char *s)
{
	int sign = 1;  /* Initialize sign as positive */
	int result = 0;
	int a = 0;

	/* Handle signs */
	while (s[a] == '-' || s[i] == '+')
	{
		if (s[a] == '-')
		{
			sign *= -1;
		}
		a++;
	}

	/* Convert the string to an integer */
	while (s[a] >= '0' && s[a] <= '9')
	{
		result = result * 10 + (s[a] - '0');
		a++;
	}

	return (result * sign);
}
