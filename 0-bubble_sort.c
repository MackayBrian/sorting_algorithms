#include "sort.h"
/**
 * bubble_sort-sorts an array of integers in ascending order
 * @array: the array name
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, temp, flag = 0;

	for (i = 0; i < size - 1; i++)
	{
		{
			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					flag = 1;
					printf("%d\n", array);
				}
				if (flag == 0)
				break;
			}
		}
	}
}
