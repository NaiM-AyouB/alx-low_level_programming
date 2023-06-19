#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints alphabet without q and e
 * and  wether it is greater than 5, less than 6, or 0
 * Return: 0
 */
int main(void)
{
        int i;

	for (i = 97; i < 123; i++);
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
        return (0);
}
