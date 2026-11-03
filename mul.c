#include <stdio.h>

int main()
{
    int a, b, i, result = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(i = 1; i <= b; i++)
    {
        result = result + a;
    }

    printf("Multiplication = %d", result);
}
