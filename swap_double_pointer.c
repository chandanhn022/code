#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *p = &a;
    int *q = &b;

    int **x = &p;
    int **y = &q;

    int temp;

    temp = **x;
    **x = **y;
    **y = temp;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
