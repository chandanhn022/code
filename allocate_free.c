#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    p = (int *)malloc(sizeof(int));

    if(p == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    *p = 100;

    printf("Value = %d\n", *p);

    free(p);
    p = NULL;

    printf("Memory released successfully");

    return 0;
}
