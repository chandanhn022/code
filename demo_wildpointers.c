#include <stdio.h>

int main()
{
    int a = 10;

    int *p;

    p = &a;

    printf("Value = %d", *p);

    return 0;
}
