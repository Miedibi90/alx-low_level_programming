#include <stdio.h>
/**
 * main - my Entry point; code prints alphabet in lowercase and then uppercase
 *
 * Return: Always 0 (Successful)
 */

	int main(void)
	{
		int i = 'a', j = 'A';

		for (i = 'a'; i <= z; i++)
		{
			for (j = 'A'; j <= 'Z'; j++)
			{
				putchar(j);
			}
			putchar(i);
		}
		putchar('\n');
		return (0);
	}
