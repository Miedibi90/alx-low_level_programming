#include <stdio.h>
/**
 * main - my Entry point; code to print lower case
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int i = 'a';

	for (i = 'a'; i <= 'z' && i != 'q' || 'e'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
