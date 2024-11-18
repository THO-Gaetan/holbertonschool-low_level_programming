#include "function_pointers.h"
#include <stdlib.h>

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	else if (*f == NULL)
		return;
	f(name);
}
