#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Banana";
    char str2[] = "Apple";

    int result;

    result = strcmp(str1, str2);

    if(result > 0)
    {
        printf("First string is greater");
    }
    else if(result < 0)
    {
        printf("Second string is greater");
    }
    else
    {
        printf("Both strings are equal");
    }

    return 0;
}
