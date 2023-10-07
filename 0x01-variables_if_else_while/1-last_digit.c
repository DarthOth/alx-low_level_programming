#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - conditional coding
 *
 * Description: 'using else and else if'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit;
	printf("Last digit of %d is ", n);
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("%d and is greater than 5", last_digit);
	}
	else if (last_digit  == 0)
	{
		printf("%d and is 0", last_digit);
	}
	else if (last_digit < 6 && last_digit !=0)
	{
		printf("%d and is less than 6 and not 0", last_digit);

	return (0);
}
