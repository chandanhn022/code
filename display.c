#include <stdio.h>

int main()
{
    int i,n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];    

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
