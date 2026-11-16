#include <stdio.h>

int main()
{
    int a = 50, b = 30;

    void *p, *q;

    p = &a;
    q = &b;

    if(*(int *)p > *(int *)q)
    {
        printf("Largest number = %d", *(int *)p);
    }
    else
    {
        printf("Largest number = %d", *(int *)q);
    }

    return 0;
}
