#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);

/* FUNCTIONS */
int write_character(char c);
int write_string(char *s);
int _strlen(char *s);
int print_reverse(char *s);
int print_binary(int num);

#endif
