#include <stdio.h>
#include <string.h>

int reverse_comp( const char* str1, const char* str2);
int my_str_cmp(const char* str1, const char* str2);
void printing_of_masives(const char** pstr, const int size);
void bubble_sorting(const char** pstr, int size, int (*comparison_func)(const char* str1, const char* str2));


