#include <stdio.h>

int main()
{
    int a = 20;
    int *p;

    p = &a;

    printf("Value of a = %d", *p);

    return 0;
}
