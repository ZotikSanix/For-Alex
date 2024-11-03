#include <stdio.h>
#include <string.h>

#include "function.h"

int my_str_cmp(const char* str1, const char* str2)
 {
    int i = 0;
    while(str1[i] && str2[i])
    {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return 0;
 }

 int reverse_comp(const char* str1, const char* str2)
{
    int i = strlen(str1) - 1, j = strlen(str2) - 1;
    while (i >= 0 && j >= 0)
    {
        if (str1[i] != str2[j])
            return str1[i] - str2[j];
        i--;
        j--;
    }
    return 0;
}