#include "main.h"

/*
 * _printf - prototype
 *
 */

int _printf(const char *format, ...)
{
	int printc = 0; /* printc is number of character to be printed */
	va_list argsbox;

	if (format == NULL)
		return (-1);
	va_start(argsbox, format);

	while (*format) /* iteration loop */
	{
		if (*format != '%') /* if not % sign then continue */
		{
			write(1, format, 1);
			printc++;
		}
		else /* if it is % sign then increment */
		{
			format++; /* check the next char */
			if (*format == '\0') /* this indicate the end of string */
			{
				break;
			}
			if (*format == '%')
			{
				write(1, format, 1);
				printc++;
			}
			else if (*format == 'c') /* if the case is a character */
			{
				char c = va_arg(argsbox, int);

				write(1, &c, 1); /* character is a 1 bytes */
				printc++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(argsbox, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++; /* lengeth of a string */
				write(1, str, str_len);
				printc += str_len;
			}
			else if (*format == 'i')
			{
				char *str;
				unsigned long int c = va_arg(argsbox, int);
				unsigned long int n = c;
				while (n != 0)
				{
					len++;
					n /= 10;
				}
				str = malloc((sizeof(char) * len) + 1);
				for (i = 0; i < len; i++)
				{
					rem = c % 10;
					c = c / 10;
					str[len - (i + 1)] = rem + '0';
				}
				str[len] = '\0';
				write(1, str, strlen(str));
				free(str);
			}
		}
		format++;
	}
	va_end(argsbox); /* stop recieving arguments */

	return (printc);
}
