#include <stdio.h>
#include <string.h>

#include "function.h"


void direct_sorting(const char** pstr, int size)
{
    for (int j = 0; j < (size -1); j++)
    {
        for (int i = 0; i < (size - 1); i++)
        {
            int res = my_str_cmp(pstr[i], pstr[i+1]);
            if (res > 0)
            {
                const char* buffer = pstr[i];
                pstr[i] = pstr[i+1];
                pstr[i+1] = buffer;
            }
        }
    }
}

void reverse_sorting(const char** pstr, int size)
{
    for (int j = 0; j < (size -1); j++)
    {
        for (int i = 0; i < (size - 1); i++)
        {
            int res = reverse_comp(pstr[i], pstr[i+1]);
            if (res > 0)
            {
                const char* buffer = pstr[i];
                pstr[i] = pstr[i+1];
                pstr[i+1] = buffer;
            }
        }
    }
}