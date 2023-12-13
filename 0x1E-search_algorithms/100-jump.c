#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step;
	size_t position;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	position = 0;
	while (position < size + step)
	{
		if (array[position] >= value || position > size)
		{
			printf("Value found between indexes [%d] and [%d]\n",
			       (int)(position - step), (int)position);
			position = position - step;
			break;
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n",
			       (int)position, array[position]);
			position = position + step;
		}
	}

	for (; position < size; position++)
	{
		printf("Value checked array[%d] = [%d]\n",
		       (int)position, array[position]);
		if (array[position] == value)
			return (position);
	}
	return (-1);
}
