#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid size");
        return 1;
    }

    ptr = malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter numbers:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
        sum = sum + ptr[i];
    }

    printf("Sum = %d", sum);

    free(ptr);

    return 0;
}
