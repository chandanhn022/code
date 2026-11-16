#include <stdio.h>

int main()
{
    int a = 50, b = 30;

    int *p = NULL;
    int *q = NULL;

    p = &a;
    q = &b;

    if(*p > *q)
    {
        printf("Largest = %d", *p);
    }
    else
    {
        printf("Largest = %d", *q);
    }

    return 0;
}
