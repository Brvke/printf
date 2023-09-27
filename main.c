#include "main.h"
#include <stdio.h>
/**
*
*
*/
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Address:[%p]\n", addr);
    len2 = printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
  
  /** 
    len = _printf("%c\n", 'S');
    len2 = printf("%c\n", 'S');
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
    len2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    len = _printf("Let'see if the case is correctly done: %c. Did it work?\n", 48);
    len2 = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    len = _printf("%s", "This sentence is retrieved from va_args!\n");
    len2 = printf("%s", "This sentence is retrieved from va_args!\n");
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know"); 
    len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    
    len = _printf("Complete the sentence: You %s nothing, Jon Snow. \n", (char *)0); 
    len2 = printf("Complete the sentence: You %s nothing, Jon Snow. \n", (char *)0); 
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    
    len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.\n", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon"); 
    len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.\n", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon");
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
   
    len = _printf("%%\n");
    len2 = printf("%%\n");
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    len = _printf("Should print a single percent sign: %%\n");
    len2 = printf("Should print a single percent sign: %%\n");
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
   
    len = _printf("%s%c%c%c%s%%%s%c", "Loading", '.', '.','.', "99", "Please wait", '\n');
    len2 = printf("%s%c%c%c%s%%%s%c", "Loading", '.', '.','.', "99", "Please wait", '\n');
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    
    len = _printf("css%ccs%scscscs", 'T', "Test");
    printf("\n");
    len2 = printf("css%ccs%scscscs", 'T', "Test");
    printf("\nlength of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
   **/
    return (0);
}
