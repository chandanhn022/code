#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter num a: ");
    scanf("%d",&a);

    printf("Enter num b:");
    scanf("%d",&b);

    if(a > b)
    {
        printf("%d is bigger", a);
    }
    else
    {
        printf("%d is bigger", b);
    }
}
