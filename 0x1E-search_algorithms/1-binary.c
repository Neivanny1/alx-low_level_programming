#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where the value is located or -1 if value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left;
	size_t mid;
	size_t right;

	if (array == NULL || size == 0)
		return (-1);

	left = 0;
	right = size - 1;

	print_array(array, left, size);
	while (left < right)
	{
		mid = (left + right) / 2;
		if (array[mid] < value)
		{
			left = mid + 1;
			print_array(array, left, size);
		}
		else if (array[mid] > value)
		{
			right = mid;
			print_array(array, left, right + 1);
		}
		else
			return (mid);
	}

	return (-1);
}

/**
 * print_array - prints an array of integers
 * @array: the array to be printed
 * @position: index to start printing the array
 * @size: number of elements in @array
 */
void print_array(int *array, size_t position, size_t size)
{
	size_t i;

	printf("Searching in array: ");

	i = position;
	while (array && i < size)
	{
		if (i > position)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
