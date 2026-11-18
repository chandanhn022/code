#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50];
    char str2[25];

    printf("Enter first string: ");
    scanf("%24s", str1);

    printf("Enter second string: ");
    scanf("%24s", str2);

    strcat(str1, str2);

    printf("Concatenated string = %s", str1);

    return 0;
}
