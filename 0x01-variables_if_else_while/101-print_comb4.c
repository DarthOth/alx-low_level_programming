#include <stdio.h>
/**
 * main - comb function
 *
 * Description: 'using for and if function'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j=48; j <= 57; j++)
		{
			if (i < j)
			{
				for (k = 48; k <= 57; k++)
				{
					if (j < k)
					{
						putchar(i);
						putchar(j);
						putchar(k);
						if (i != 55 || j != 56 || k != 57)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
