#include <stdio.h>
#include <string.h>

#include "function.h"


void bubble_sorting(Tex_inf *stk, int (*comparison_func)(char* str1, char* str2))
{
    for (size_t j = 0; j < (stk->Line -1); j++)
    {
        for (size_t i = 0; i < (stk->Line - 1); i++)
        {
            int res = comparison_func(stk->LineText[i], stk->LineText[i+1]);
            if (res > 0)
            {
                char* buffer = stk->LineText[i];
                stk->LineText[i] = stk->LineText[i+1];
                stk->LineText[i+1] = buffer;
            }
        }
    }
}
