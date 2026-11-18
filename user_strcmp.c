#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30];
    char str2[30];

    printf("Enter first string: ");
    scanf("%29s", str1);

    printf("Enter second string: ");
    scanf("%29s", str2);

    if(strcmp(str1, str2) == 0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }

    return 0;
}
