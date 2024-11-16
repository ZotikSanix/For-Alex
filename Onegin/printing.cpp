#include <stdio.h>
#include <string.h>

#include "function.h"

void printing_of_masives(char** pstr, size_t size)
{
    for (size_t i = 0; i < size; i++)
        {
            printf("%s\n", pstr[i]);
        }
}
