#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <sys/stat.h>

#include "struct.h"
#include "function.h"

int my_open(Tex_inf *stk)
{
    FILE *file = fopen("file.txt", "r");

    struct stat File_inf = {};
    stat("file.txt", &File_inf);
    
    stk->Tex_Size = File_inf.st_size;
    stk->Text = (char*) calloc(stk->Tex_Size, sizeof(char));

    fread(stk->Text, sizeof(char), stk->Tex_Size, file);

    text_processing(stk);

    fclose(file);

    return 0;
}