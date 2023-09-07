#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string consists of only digits
 * @str: The input string
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The result of the multiplication
 */
int multiply(char *num1, char *num2)
{
	int result = 0;

	while (*num1)
	{
		int digit1 = *num1 - '0';
		int carry = 0;
		char *temp2 = num2;
		int shift = 0;

		while (*temp2)
		{
			int digit2 = *temp2 - '0';
			int product = (digit1 * digit2) + carry;
			int current = result;

			while (shift > 0)
			{
				product *= 10;
				shift--;
			}
			result = current + product;
			carry = result / 10;
			result %= 10;
			temp2++;
			shift++;
		}
		while (carry > 0)
		{
			int current = result;

			result = current + carry;
			carry = result / 10;
			result %= 10;
		}
		num1++;
	}

	return (result);
}

/**
 * main - Entry point of the program for multiplying two positive numbers
 * @argc: The number of command-line arguments, including the program name
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on successful execution, or 98 and an "Error" message on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (!is_digit(num1) || !is_digit(num2))
	{
		printf("Error\n");
		return (98);
	}
	int result = multiply(num1, num2);

	printf("%d\n", result);
	return (0);
}
