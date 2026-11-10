#include <stdio.h>

int main()
{
    int a[5], b[5], i;

    printf("Enter 5 elements:\n");

    // Input array A
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // Copy array A into array B
    for(i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }

    printf("Copied array:\n");

    // Display array B
    for(i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
