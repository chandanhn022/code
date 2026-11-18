#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i, largest;

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

    largest = p[0];

    for(i = 1; i < 5; i++)
    {
        if(p[i] > largest)
        {
            largest = p[i];
        }
    }

    printf("Largest element = %d", largest);

    free(p);

    return 0;
}
