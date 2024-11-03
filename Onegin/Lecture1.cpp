#include <stdio.h>
#include <string.h>


void my_puts(char* pstr);
size_t my_strlen(const char* pstr);
int my_strcmp(char* pstr1, char* pstr2);
char* my_strcpy(char* dst, const char* src);
char* my_strchr(char* pstr, int a);

int main()
{
    char str[5] = "ABCD";
    char str1[5] = "ABCD";
    char str2[5];

    my_puts(str);
    printf("\n\n");
    printf("strlen = %d\n", my_strlen(str));
    printf("strcmp = %d\n\n", my_strcmp(str,str1));
    printf("my_puts(str,str2)\n");
    my_puts(my_strcpy(str2, str));

    printf("%s\n", my_strchr(str, 'B'));
    printf("%s", strchr(str, 'B'));


    return 0;


}

void my_puts(char* pstr)
{
    int i = 0;
    while (pstr[i] != '\0')
    {
        printf("pstr[%d] = %c\n", i, pstr[i]);
        i+=1;
    }
}

size_t my_strlen(const char* pstr)
{
    size_t i = 0;
    while (pstr[i] != '\0')
    {
        i+=1;
    }
    return i;
}

int my_strcmp(char* pstr1, char* pstr2)
{
    int  i = 0;
    int flag = 0;

    while ((pstr1[i] != '\0') && (pstr1[i] == pstr2[i]))
    {
        i++;
    }

    return pstr1[i] - pstr2[i];

}

char* my_strcpy(char* dst, const char* src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dst[i++] = src[i];
    }

    dst[i] = '\0';

    return dst;

}



char* my_strchr(char* pstr, int a)
{
    int i = 0;
    while (pstr[i] != '\0')
    {
        if (pstr[i] == a)
            return pstr + i;
        i++;
    }
    
    return NULL;
}




