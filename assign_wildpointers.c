#include <stdio.h>

int main()
{
    int a = 100;

    int *p;

    p = &a;

    printf("Value = %d", *p);

    return 0;
}
