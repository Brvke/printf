#include "main.h"
/**
 * num_to_str - prints a set of string form numbers
 *
 * @str:str to be outputed
 * @num:numbers to be converted
 * @base: base of the string
 * @type: type of the string
 *
*/
void num_to_str(unsigned long int num, char *str, int base, char type)
{
	int i, rem, len = 0;
	unsigned long int n;
	char *X, *x;

	x = "abcdef";
	X = "ABCDEF";
	n = num;
	while (n != 0)
	{
		len++;
		n /= base;
	}
	for (i = 0; i < len; i++)
	{
		rem = num % base;
		num = num / base;

		if (rem > 9)
		{
			if (type == 'x')
			{
				rem = x[rem - 10];
				str[len - (i + 1)] = rem;
				continue;
			}
			else if (type == 'X')
			{
				rem = X[rem - 10];
				str[len - (i + 1)] = rem;
				continue;
			}
		}
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';
}
