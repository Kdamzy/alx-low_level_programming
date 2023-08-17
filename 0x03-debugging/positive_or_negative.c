#inclde "main.h"
/**
 * main - determine if a number is positive, negavtive or zero
 * @i: The number to check
 * Return: 0 on success
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %sln", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %sln", i, "positive");
	}
	else
	{
		printf("%d is %sln", i, "zero");
	}
	return;
}
