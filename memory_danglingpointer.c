#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *q;

    p = (int *)malloc(sizeof(int));

    *p = 200;

    q = p;

    printf("P value = %d\n", *p);
    printf("Q value = %d\n", *q);

    free(p);

    p = NULL;
    q = NULL;

    printf("Both pointers are NULL");

    return 0;
}
