#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int temp;

    int *p = NULL;
    int *q = NULL;

    p = &a;
    q = &b;

    printf("Before swapping:\n");
    printf("a = %d\n", *p);
    printf("b = %d\n", *q);

    temp = *p;
    *p = *q;
    *q = temp;

    printf("\nAfter swapping:\n");
    printf("a = %d\n", *p);
    printf("b = %d\n", *q);

    return 0;
}
