#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i;

    p = (int *)calloc(5, sizeof(int));

    if(p == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("Array elements are:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}
