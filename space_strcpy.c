#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50];
    char str2[50];

    printf("Enter a sentence: ");
    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0';

    strcpy(str2, str1);

    printf("Original string = %s\n", str1);
    printf("Copied string = %s", str2);

    return 0;
}
