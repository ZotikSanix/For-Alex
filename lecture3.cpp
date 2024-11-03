#include <stdio.h>
#include <string.h>

#include "function.h"

int main()

{ // FIXME читай про fopen fclose fread ftell fseek
    const int size = 4;
    
    const char* str_original[size] = {"My uncle has the most honest rules", 
                                      "When I was seriously ill",
                                      "He forced himself to respect himself", 
                                      "And I couldn't think of a better one"};

    const char* str_direct[size] = {"My uncle has the most honest rules", 
                                    "When I was seriously ill",
                                    "He forced himself to respect himself", 
                                    "And I couldn't think of a better one"};
    
    const char* str_feedback[size] = {"My uncle has the most honest rules", 
                                      "When I was seriously ill",
                                      "He forced himself to respect himself", 
                                      "And I couldn't think of a better one"};
    printf("str_original:\n");
    
    printing_of_masives(str_original, size);

    printf("\n");
    printf("str_direct:\n");
 
    direct_sorting(str_direct, size);
    printing_of_masives(str_direct, size);
    
    
    printf("\n");
    printf("str_feedback:\n");
   
    reverse_sorting(str_feedback, size);
    printing_of_masives(str_feedback, size);
    
    return 0;
}






