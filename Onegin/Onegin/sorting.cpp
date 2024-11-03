#include <stdio.h>
#include <string.h>

#include "function.h"


void bubble_sorting(const char** pstr, int size, int (*comparison_func)(const char* str1, const char* str2))
{
    for (int j = 0; j < (size -1); j++)
    {
        for (int i = 0; i < (size - 1); i++)
        {
            int res = comparison_func(pstr[i], pstr[i+1]);
            if (res > 0)
            {
                const char* buffer = pstr[i];
                pstr[i] = pstr[i+1];
                pstr[i+1] = buffer;
            }
        }
    }
}
