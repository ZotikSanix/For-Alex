#include <stdio.h>
#include <string.h>

#include "function.h"

void printing_of_masives(const char** pstr, const int size)
{
    for (int i = 0; i<size; i++)
        {
            printf("%s\n", pstr[i]);
        }
}
