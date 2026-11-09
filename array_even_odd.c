#include <stdio.h>

int main()
{
    int i, n, even = 0, odd = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even numbers count = %d\n", even);
    printf("Odd numbers count = %d\n", odd);

    return 0;
}
