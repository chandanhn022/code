#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int temp;

    int *p = &a;
    int *q = &b;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}
