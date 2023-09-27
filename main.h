#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _strlen(char *);
void _strcat(char *, char *);
void _strcpy(char *, char *);

void num_to_str(unsigned long int num, char *str, int base, char type)



#endif
