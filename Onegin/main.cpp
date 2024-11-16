#include <stdio.h>
#include <string.h>

#include "function.h"
#include "struct.h"

int main()

{ 
    Tex_inf File_information= {};
    my_open(&File_information);

    FILE *File = fopen("output.txt", "w");

    bubble_sorting(&File_information, my_str_cmp);

    printing_file(File, &File_information);

    bubble_sorting(&File_information, reverse_comp);
    
    printing_file(File, &File_information);

    printing_file_tex(File, &File_information);

    fclose(File);

    return 0;
}






