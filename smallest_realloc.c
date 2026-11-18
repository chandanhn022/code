#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i, smallest;

    p = malloc(3 * sizeof(int));

    if(p == NULL)
        return 1;

    printf("Enter 3 elements:\n");

    for(i = 0; i < 3; i++)
        scanf("%d", &p[i]);

    int *temp = realloc(p, 5 * sizeof(int));

    if(temp == NULL)
    {
        free(p);
        return 1;
    }

    p = temp;

    printf("Enter 2 more elements:\n");

    for(i = 3; i < 5; i++)
        scanf("%d", &p[i]);

    smallest = p[0];

    for(i = 1; i < 5; i++)
    {
        if(p[i] < smallest)
            smallest = p[i];
    }

    printf("Smallest element = %d", smallest);

    free(p);

    return 0;
}
