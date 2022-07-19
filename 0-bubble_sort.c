#include "sort.h"
/**
 * bubble_sort - sorts data using bubble sort algorithm
 * @array: integer array to be sorted
 * @size: size of the array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;
	bool sorted = false;

	while (!sorted)
	{
		sorted = true;
		if (size < 2)
		{
			break;
		}
		for (i = 0; i < size; i++)
		{
			if (array[i] < array[i - 1])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				sorted = false;
				print_array(array, size);
			}
		}
	}
}
