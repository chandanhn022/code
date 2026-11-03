#include <stdio.h>

int main()
{
    int a, b,c;

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b:");
    scanf("%d",&b);

    printf("Enter number c:");
    scanf("%d",&c);

    if(a >= b && a >= c)
    {
        printf("%d is the biggest number", a);
    }
    else if(b >= a && b >= c)
    {
        printf("%d is the biggest number", b);
    }
    else
    {
        printf("%d is the biggest number", c);
    }

}
