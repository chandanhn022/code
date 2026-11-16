#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int sum;

    void *p, *q;

    p = &a;
    q = &b;

    sum = *(int *)p + *(int *)q;

    printf("First number = %d\n", *(int *)p);
    printf("Second number = %d\n", *(int *)q);
    printf("Sum = %d", sum);

    return 0;
}
