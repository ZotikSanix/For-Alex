#include <stdio.h>
#include <stdlib.h>

int maainn()
{
    FILE *file;
    file = fopen("file.txt", "r");
    char c[100];
    if (fgets(c, 100, file) != NULL)
        printf(c);
    fclose(file);
}
