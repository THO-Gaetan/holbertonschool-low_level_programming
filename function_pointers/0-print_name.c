#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - print the name of the function.
* @name : the name of my function.
* @f : the function pointers that will be used.
* Description : the function will check if name and f is null
* if name is null it will just return
* else it will give name as the parameter for the function pointer f
* return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	else if (*f == NULL)
		return;
	f(name);
}
