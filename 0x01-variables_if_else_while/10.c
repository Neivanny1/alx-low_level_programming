#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int num1 = '0';
	int num2 = '0';

	for (num2 = '0'; num2 <= '9'; num2++)
	{
		for (num1 = '0'; num1 <= '9'; num1++)
		{
			if (!((num1 == num2) || (num2 > num1)))
			{
				putchar(num2);
				putchar(num1);
				if (!(num1 == '9' && num2 == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
