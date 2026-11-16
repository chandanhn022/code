#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int temp;

    void *p, *q;

    p = &a;
    q = &b;

    printf("Before swapping:\n");
    printf("a = %d\n", *(int *)p);
    printf("b = %d\n", *(int *)q);

    temp = *(int *)p;
    *(int *)p = *(int *)q;
    *(int *)q = temp;

    printf("\nAfter swapping:\n");
    printf("a = %d\n", *(int *)p);
    printf("b = %d\n", *(int *)q);

    return 0;
}
