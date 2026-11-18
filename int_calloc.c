#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    p = (int *)calloc(1, sizeof(int));

    if(p == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Initial value = %d\n", *p);

    *p = 100;

    printf("Updated value = %d", *p);

    free(p);

    return 0;
}
