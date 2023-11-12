#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - function name
 * @argc: function param
 * @argv: function param
 * Return: return value
 */

int main(int argc, char *argv[])
{
	int i, n, result, coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	result = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (n >= coins[i])
		{
			result++;
			num -= coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
