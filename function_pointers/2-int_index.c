#include "function_pointers.h"
/**
* int_index - the function that allowed us to find a chosen element in an array
* @array : the array where our element is stored
* @size : the size/position of the array
* @cmp : the function pointer we will use in this function
* description : the function will start to check if size is positif or not
* if it is not positif it will return -1, we check if array and cmp are null
* if they are null we will return 0, then we compare all element of the
* array until cmp is not null then we return the position of the element
* in the array.
* Return: -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || *cmp == NULL)
		return (0);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		return (i);
		i++;
	}
	return (-1);
}
