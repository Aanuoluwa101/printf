#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);

/* FUNCTIONS */
int write_character(char c);
int write_string(char *s);
int _strlen(char *s);
int print_reverse(char *s);
int print_binary(int num);
int print_number(int n);
int is_in(char c);
#endif
