#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible different combinations of 3 digits.
 * Numbers must be separated by commas and a space.
 * The 3 digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination.
 * print only the smallest combination of 3 digits.
 * Numbers should be printed in ascending order.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 6 times.
 * You are not allowed to use any variables of type `char`.
 * Return: 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 123)
		{
			n++;
			continue;
		}
	putchar(n);
	n++;
	}

putchar('\n');
return (0);
}
