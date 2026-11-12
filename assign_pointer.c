#include <stdio.h>

int main()
{
    int a = 40;

    int *p;
    int *q;

    p = &a;
    q = p;

    printf("Value using p = %d\n", *p);
    printf("Value using q = %d", *q);

    return 0;
}
