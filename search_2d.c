#include <stdio.h>

int main()
{
    int a[2][2], i, j, num, found = 0;

    printf("Enter matrix elements:\n");

    // Input matrix
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &num);

    // Search element
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            if(a[i][j] == num)
            {
                found = 1;
            }
        }
    }

    if(found == 1)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
