#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* reverse_string(char* str)
{
    assert(str != NULL);
    if (*str != '\0')
    {
        str++;
        reverse_string(str);
        printf("%c", *(str - 1));
    }
    return str;
}

int main()
{
    char arr[] = "abcdef";
    char* ret = reverse_string(arr);
    system("pause");
    return 0;
}

