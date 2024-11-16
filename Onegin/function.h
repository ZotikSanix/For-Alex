#ifndef FUNCTION_H
#define FUNCTION_H


#include <stdio.h>
#include <string.h>
#include "struct.h"

void text_processing(Tex_inf *stk);
int my_open(Tex_inf *stk);
int reverse_comp(char* str1, char* str2);
int my_str_cmp(char* str1, char* str2);
void bubble_sorting(Tex_inf *stk, int (*comparison_func)(char* str1, char* str2));
void printing_file (FILE *File, Tex_inf *stk);
void printing_file_tex (FILE *File, Tex_inf *stk);
#endif
