#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Hello ";
    char str2[] = "World";

    strcat(str1, str2);

    int length = strlen(str1);

    printf("Concatenated string = %s\n", str1);
    printf("Total length = %d", length);

    return 0;
}
