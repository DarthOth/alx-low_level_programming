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
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
