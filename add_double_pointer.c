#include <stdio.h>

int main()
{
    int a = 15, b = 25;
    int *p = &a;
    int *q = &b;

    int **x = &p;
    int **y = &q;

    int sum;

    sum = **x + **y;

    printf("Sum = %d", sum);

    return 0;
}
