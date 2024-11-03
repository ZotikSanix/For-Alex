 #include <stdio.h>


 int my_str_cmp(const char* str1, const char* str2)
 {
    int i = 0;
    while(str1[i] && str2[i])
    {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
 }

int main()
{
    const char* str[4] = {"ALEXEY", "ALEXANDER", "PENCIL", ""};
    const size_t size = sizeof(str)/ sizeof(str[0]);
    printf("size = %d\n", size);

    for (int i = 0; i < (size - 1); i++)
    {
            int res = my_str_cmp(str[i], str[i+1]);
            if (res > 0)
            {
                const char* buffer = str[i];
                str[i] = str[i+1];
                str[i+1] = buffer;
            }
    }
    for (int i = 0; i<size; i++)
    {
        printf("%s ", str[i]);
    }
}


