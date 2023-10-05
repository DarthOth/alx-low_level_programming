#include <stdio.h>
/**
 * main -  print the size of various types
 *
 * Description: 'size of all types'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	float f;
	char c;
	long int i;
	long long int j;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(j));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
