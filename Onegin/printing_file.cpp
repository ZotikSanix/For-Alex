#include <stdio.h>
#include <string.h>

#include "function.h"
#include "struct.h"


void printing_file (FILE *File, Tex_inf *stk)
{
    for(size_t i = 0; i < stk->Line; i++)
    {
        fprintf(File, "%s\n", stk->LineText[i]);
    }
    fprintf(File,"%s\n", "" );
}

void printing_file_tex (FILE *File, Tex_inf *stk)
{
    for(size_t i = 0; i < stk->Tex_Size; i++)
    {
        if(stk->Text[i] == '\0')
        {
            fprintf(File, "\n");
        }
        else
        {
            fprintf(File, "%c", stk->Text[i]);
        }
    }
}
