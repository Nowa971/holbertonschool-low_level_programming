#include <stdio.h>

/**
 * main - prints all possible combinations of two single-digit numbers,
 * separated by comma (no space), in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');      /* 1 */
			putchar(j + '0');      /* 2 */

			if (i == 8 && j == 9)
				putchar('\n');     /* 3 */
			else
				putchar(',');      /* 4 */
		}
	}
	return (0);
}



