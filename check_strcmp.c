#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Apple";
    char str2[] = "Mango";

    if(strcmp(str1, str2) != 0)
    {
        printf("Strings are different");
    }
    else
    {
        printf("Strings are same");
    }

    return 0;
}
