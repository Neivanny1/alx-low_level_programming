#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t position;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;
	position = low + (((double)(high - low) / (array[high] - array[low]))
			  * (value - array[low]));

	while (low <= high && value >= array[low] && value <= array[high])
	{
		printf("Value checked array[%d] = [%d]\n",
		       (int)position, array[position]);

		if (array[position] == value)
			return (position);

		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;

		position = low + (((double)(high - low) /
				(array[high] - array[low]))
			       * (value - array[low]));
	}

	if (value > array[high])
		printf("Value checked array[%d] is out of range\n",
		       (int)position);

	return (-1);
}
