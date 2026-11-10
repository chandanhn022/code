#include <stdio.h>

int main()
{
    int a[2][2], i, j, smallest;

    printf("Enter matrix elements:\n");

    // Input matrix
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    smallest = a[0][0];

    // Find smallest element
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            if(a[i][j] < smallest)
            {
                smallest = a[i][j];
            }
        }
    }

    printf("Smallest element = %d", smallest);

    return 0;
}
