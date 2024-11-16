#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <sys/stat.h>

#include "struct.h"
#include "function.h"


void text_processing(Tex_inf *stk)
{
    for (size_t i = 0; i < (stk->Tex_Size); i++)
    {
        if ((stk->Text)[i] == '\n')
        {
            (stk->Text)[i] = '\0';
            (stk->Line)++;
        }
    }

    stk->LineText = (char**) calloc(stk->Line, sizeof(char*));
    stk->LineText[0] = stk->Text;

    int counter = 0;

    for (size_t j = 1; j < (stk->Line); j++)
    {
        
        while ((stk->Text)[counter] != '\0')
        {
            counter++;

        }
            counter++;
            
        stk->LineText[j] = (stk->Text + counter);
    }
}