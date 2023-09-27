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
			else if (*format == 'd')
			{
				int num = va_arg(args, int);
				if (num == 0)
				{
					char ch = '0';
					write(1, &ch, 1);
                		}
				else
				{
					if (num < 0)
					{
						char ch = '-';
						write(1, &ch, 1);
						num = -num;
					}
					char buffer[20];
					int index = 0;
					while (num > 0)
					{
 						buffer[index++] = (num % 10) + '0';
                        			num /= 10;
					}
				}	
				for (int i = index - 1; i >= 0; i--)
				{
					write(1, &(buffer[i]), 1);
				}
	
				else
				{
					write(1, format, 1);
        			}
			}
		format++;
	}
	va_end(argsbox); /* stop recieving arguments */

	return (printc);
}
