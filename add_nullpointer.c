#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int sum;

    int *p = NULL;
    int *q = NULL;

    p = &a;
    q = &b;

    sum = *p + *q;

    printf("First number = %d\n", *p);
    printf("Second number = %d\n", *q);
    printf("Sum = %d", sum);

    return 0;
}
