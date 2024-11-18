#include "function_pointers.h"
/**
* array_iterator - the function that check every element of an array
* @array : the array variable
* @size : the size/position of the array variable
* @action : the function pointer that is used
* Description : the fuction initialise i that allowed to check were we are
* inside of the function pointer, then we will check if array and action are
* not null then we are executing action for every array element
* return : void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL || *action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
