#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    int *p = &a[1];
    int *q = &a[4];

    int diff = q - p;

    printf("Difference = %d", diff);

    return 0;
}
