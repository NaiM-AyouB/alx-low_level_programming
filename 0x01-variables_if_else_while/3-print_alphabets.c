#include <stdio.h>

/**
 * main - Prints an alphabet.
 * Return: 0
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchr(alp[26]);
	}
	putchar('\n');
        return (0);
}
