#include <main.h>

void myPrintf(const char* format, ...) {
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            if (*format == 'p') {
                void* ptr = va_arg(args, void*);
                uintptr_t address = (uintptr_t)ptr;
                char buffer[20];
                int index = 0;

                while (address > 0) {
                    int digit = address % 16;
                    if (digit < 10) {
                        buffer[index++] = digit + '0';
		    }
		    else 
		    {
                        buffer[index++] = digit - 10 + 'a';
                    }
                    address /= 16;
                }

                write(1, "0x", 2);

                for (int i = index - 1; i >= 0; i--) 
		{
                    write(1, &(buffer[i]), 1);
                }
            }
        } 
	else 
	{
            write(1, format, 1);
        }
        format++;
    }

    va_end(args);
}

int main() 
{
    int num = 42;
    int* ptr = &num;

    myPrintf("The pointer address is %p\n", ptr);

    return 0;
}
