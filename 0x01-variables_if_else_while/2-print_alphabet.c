#include <stdio.h>
/**
 * main - main block
 * Description: Print numbers from 0 to 99.
 * Numbers must be separated by commas followed by a space.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use variables of type `char`.
 * Return: 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
