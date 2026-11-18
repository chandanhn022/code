#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30];
    char str2[30];

    printf("Enter a string: ");
    scanf("%29s", str1);

    strcpy(str2, str1);

    printf("Original string = %s\n", str1);
    printf("Copied string = %s", str2);

    return 0;
}
