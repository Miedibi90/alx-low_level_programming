#include <stdio.h>
/**
 * main - Entry point of code; prints lowercase alphabets
 *
 * Return: Always 0 (Successful)
 */
int  main(void)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
		putchar('\n');
	return (0);
}
