#include <stdio.h>

int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Address of a = %p",p);

    return 0;
}
