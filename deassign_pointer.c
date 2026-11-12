#include <stdio.h>

int main()
{
    int a = 50;

    int *p = &a;

    printf("Before de-assignment:\n");
    printf("Value = %d\n", *p);

    p = NULL;

    printf("After de-assignment:\n");
    printf("Pointer = %p",p);

    return 0;
}
