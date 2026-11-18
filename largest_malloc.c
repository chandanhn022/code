#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i, largest;

    ptr = malloc(5 * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    largest = ptr[0];

    for(i = 1; i < 5; i++)
    {
        if(ptr[i] > largest)
        {
            largest = ptr[i];
        }
    }

    printf("Largest element = %d", largest);

    free(ptr);

    return 0;
}
