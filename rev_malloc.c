#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i;

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

    printf("Reverse array:\n");

    for(i = 4; i >= 0; i--)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}
