#include <stdio.h>

/**
 * main - prints all single-digit numbers of base 10,
 * separated by ", ", in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');       /* 1 - print digit */

		if (i != 9)
		{
			putchar(',');       /* 2 - comma */
			putchar(' ');       /* 3 - space */
		}
	}

	putchar('\n');              /* 4 - newline */
	return (0);
}




