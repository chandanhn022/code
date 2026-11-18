#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i, sum = 0;

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

    for(i = 0; i < 5; i++)
    {
        sum = sum + p[i];
    }

    printf("Sum = %d\n", sum);

    free(p);
    p = NULL;

    printf("Memory freed");

    return 0;
}
