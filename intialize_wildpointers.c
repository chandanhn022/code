#include <stdio.h>

int main()
{
    int a = 50;

    int *p = NULL;

    if(p == NULL)
    {
        printf("Pointer is NULL\n");
    }

    p = &a;

    printf("Value = %d", *p);

    return 0;
}
