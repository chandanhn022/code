#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    int *p = a;

    printf("Third element = %d\n", *(p + 2));

    printf("Fifth element = %d\n", *(p + 4));

    return 0;
}
