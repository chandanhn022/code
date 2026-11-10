#include <stdio.h>

int main()
{
    int a[2][2], i, j, sum = 0;

    printf("Enter matrix elements:\n");

    // Input matrix
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate sum
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("Sum of all elements = %d", sum);

    return 0;
}
