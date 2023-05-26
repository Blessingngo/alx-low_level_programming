#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - function that returns the sum of all its parameters
* @n: The number of parameters to be passed to the function
* @...: Number of parameters to calculate the sum of a variable
*
* Return: if n == 0 - 0
* otherwise - the sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = o;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	sum + = va_arg(ap, int);
	va_end(ap);
	return (sum);

}
