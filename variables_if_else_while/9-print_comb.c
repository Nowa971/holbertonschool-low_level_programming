#include <stdio.h>

/**
 * main - prints all possible combinations of two single-digit numbers,
 * separated by comma and space, in ascending order.
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
			putchar(i + '0');     /* print first digit */
			putchar(j + '0');     /* print second digit */

			if (i == 8 && j == 9)
			{
				putchar('\n');    /* end line after last combo */
			}
			else
			{
				putchar(',');     /* print comma */
				putchar(' ');     /* print space */
			}
		}
	}
	return (0);
}


