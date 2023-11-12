#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * check_num - function name
 * @str: function param
 * Return: return value
 */

int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - function name
 * @argc: function param
 * @argv: function param
 * Return: return value
 */

int main(int argc, char *argv[])
{
	int count = 1, str_to_int;
	int sum = 0;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
