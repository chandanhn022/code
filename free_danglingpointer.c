#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    p = (int *)malloc(sizeof(int));

    *p = 100;

    printf("Value = %d\n", *p);

    free(p);

    p = NULL;

    printf("Pointer is NULL");

    return 0;
}
