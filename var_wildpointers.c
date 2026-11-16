#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    int *p;

    p = &a;

    printf("First value = %d\n", *p);

    p = &b;

    printf("Second value = %d", *p);

    return 0;
}
