#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p = &a[4];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", *p);
        p--;
    }

    return 0;
}
