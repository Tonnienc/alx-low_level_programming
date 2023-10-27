#include "main.h"
#include "main.h"

/**
 * binary_to_uint - function converts
 * a binary number to an unsigned int.
 * @b: pointer to a string
 * containing a binary number
 * Return: unsigned int with decimal
 * value of binsry number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	if (b == NULL)
		return (0);
	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result = (result << 1) | 0;
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
