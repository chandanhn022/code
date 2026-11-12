#include <stdio.h>

int main()
{
    int a = 10;
    int b = 50;

    int *p;

    p = &b;

    printf("Value of b = %d\n", *p);
    printf("Address of b = %p",p);

    return 0;
}
