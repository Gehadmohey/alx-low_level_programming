#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: write a programe that prints all possible
 *  different combinations of two digits.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int firstdigit = 0, seconDigit;

	while (firstdigit <= 99)
	{
			if (seconDigit != firstdigit)
			{
				putchar((firstdigit / 10) + 48);
				putchar((firstdigit % 10) + 48);
				putchar(' ');
				putchar((seconDigit / 10) + 48);
				putchar((seconDigit % 10) + 48);

				if (firstdigit != 98 || seconDigit != 99)
				{
					putchar(',');
					putchar (' ');
				}
			}
			seconDigit++;
	}
	firstdigit++;
}
putchar('\n');
return (0);
}
			

