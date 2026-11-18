#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";

    if(strlen(str1) == strlen(str2) &&
       strcmp(str1, str2) == 0)
    {
        printf("Both strings are identical");
    }
    else
    {
        printf("Strings are not identical");
    }

    return 0;
}
