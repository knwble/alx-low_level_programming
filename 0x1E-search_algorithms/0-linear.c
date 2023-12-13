#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using Linear Search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
    size_t index;

    if (array == NULL)
        return (-1);

    for (index = 0; index < size; index++)
    {
        printf("Value checked array[%lu] = [%d]\n", index, array[index]);
        if (array[index] == value)
            return (index);
    }

    return (-1);
}
