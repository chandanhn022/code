#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30] = "Good";
    char str2[] = "Morning";

    strcpy(str1, str2);

    printf("First string = %s\n", str1);
    printf("Second string = %s", str2);

    return 0;
}
