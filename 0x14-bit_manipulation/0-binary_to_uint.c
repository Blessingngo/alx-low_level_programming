#include "main.h"

/**
<<<<<<< HEAD
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
=======
* binary_to_unit - function that converts a binary number to unsigned int
* @b: string containing the binary number
*
*Return: the converted number, or 0 if there are invalid characters
*/
>>>>>>> 7559c86de40c830368b8be393f9d660b5ba7921b
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
	return (0);

	for (i = 0; b[i]; i++)
{
	if (b[i] < '0' || b[i] > '1')
	return (0);
	dec_val = 2 * dec_val + (b[i] - '0');
}
<<<<<<< HEAD

=======
>>>>>>> 7559c86de40c830368b8be393f9d660b5ba7921b
	return (dec_val);
}
