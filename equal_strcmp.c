#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";

    int result;

    result = strcmp(str1, str2);

    if(result == 0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }

    return 0;
}
