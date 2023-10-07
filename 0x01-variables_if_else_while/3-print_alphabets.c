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
	int a, b;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	for (b = 65; b <= 90; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
