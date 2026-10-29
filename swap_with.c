
#include <stdio.h>

int main()
{
    int a;
    int b;
    int temp;

    printf("enter number a: ");
    scanf("%d", &a);
    printf("enter number b: ");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d", a, b);


}

