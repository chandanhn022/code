#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, n, newn, i;

    printf("Enter initial size: ");
    scanf("%d", &n);

    if(n <= 0)
        return 1;

    p = (int *)malloc(n * sizeof(int));

    if(p == NULL)
        return 1;

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &p[i]);

    printf("Enter new size: ");
    scanf("%d", &newn);

    if(newn < n || newn <= 0)
    {
        free(p);
        return 1;
    }

    int *temp = (int *)realloc(p, newn * sizeof(int));

    if(temp == NULL)
    {
        free(p);
        return 1;
    }

    p = temp;

    printf("Enter additional elements:\n");

    for(i = n; i < newn; i++)
        scanf("%d", &p[i]);

    printf("Final array:\n");

    for(i = 0; i < newn; i++)
        printf("%d ", p[i]);

    free(p);

    return 0;
}
