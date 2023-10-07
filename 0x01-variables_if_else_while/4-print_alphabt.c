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
	int c;

	for (c = 97; c <= 122; c++)
	{
		if (c == 101 || c == 113)
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
