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

	for (c = 122; c >= 97; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
