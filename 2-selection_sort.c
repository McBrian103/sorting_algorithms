#include "sort.h"
/**
 * selection_sort - sorts an array using selection sort
 * @array: the array
 * @size: size of the array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, amin;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		if (size < 2)
			break;
		amin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[amin])
			{
				amin = j;
			}
		}
		if (amin != i)
		{
			temp = array[amin];
			array[amin] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
