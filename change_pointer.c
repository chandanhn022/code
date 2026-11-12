#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    printf("Before changing = %d\n", a);

    *p = 100;

    printf("After changing = %d", a);

    return 0;
}
