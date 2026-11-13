#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    int *p = a;
    int **q = &p;

    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", *(*q + i));
    }

    return 0;
}
