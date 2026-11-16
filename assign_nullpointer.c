#include <stdio.h>

int main()
{
    int a = 100;

    int *p = NULL;

    p = &a;

    printf("Value = %d", *p);

    return 0;
}
