#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i;
    int even = 0, odd = 0;

    p = (int *)calloc(5, sizeof(int));

    if(p == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &p[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(p[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even count = %d\n", even);
    printf("Odd count = %d", odd);

    free(p);

    return 0;
}
