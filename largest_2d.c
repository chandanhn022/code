#include <stdio.h>

int main()
{
    int a[2][2], i, j, largest;

    printf("Enter matrix elements:\n");

    // Input matrix
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    largest = a[0][0];

    // Find largest element
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            if(a[i][j] > largest)
            {
                largest = a[i][j];
            }
        }
    }

    printf("Largest element = %d", largest);

    return 0;
}
