#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Embedded";

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 > len2)
    {
        printf("First string is longer");
    }
    else if(len2 > len1)
    {
        printf("Second string is longer");
    }
    else
    {
        printf("Both strings have equal length");
    }

    return 0;
}
