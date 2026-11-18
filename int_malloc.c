#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = malloc(sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    *ptr = 100;

    printf("Value = %d", *ptr);

    free(ptr);

    return 0;
}
