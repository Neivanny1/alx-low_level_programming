#include "main.h"

/**
 * print_triangle - Prints a triangle of squares according parameter
 * @size: The size of the squares triangle
 * Return: empty
 */

void print_triangle(int size)

{

	int x, y, z;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
<<<<<<< HEAD
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - 1; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
=======
	for (x = 0; x < size; x++)
	{
	for (y = size - x; y > 1; y--)
	{
	_putchar(32);
	}
	for (z = 0; z <= x; z++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
>>>>>>> d968c011d2e512ab55636515b82f79a6e03dff59
}
