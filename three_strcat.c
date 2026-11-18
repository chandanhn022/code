#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "I ";
    char str2[] = "Love ";
    char str3[] = "Programming";

    strcat(str1, str2);
    strcat(str1, str3);

    printf("Final string = %s", str1);

    return 0;
}
