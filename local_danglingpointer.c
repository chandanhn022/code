#include <stdio.h>

int main()
{
    int *p;

    {
        int a = 50;

        p = &a;

        printf("Value = %d\n", *p);
    }

    p = NULL;

    printf("Pointer is NULL");

    return 0;
}
