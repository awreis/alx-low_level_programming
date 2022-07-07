#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: parameter function pointer needs
 * @f: function to execute
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
