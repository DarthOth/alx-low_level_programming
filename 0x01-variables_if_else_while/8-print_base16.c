#include <stdio.h>
/**
 * main - putchar function
 *
 * Description: 'using putchar function'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
