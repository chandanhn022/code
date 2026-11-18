#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30] = "Hello ";
    char str2[] = "World";

    strcat(str1, str2);

    printf("First string = %s\n", str1);
    printf("Second string = %s", str2);

    return 0;
}
