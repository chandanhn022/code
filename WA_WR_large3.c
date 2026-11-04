#include <stdio.h>

int largest(int a, int b, int c)
{
    if(a > b && a > c)
    {
        return a;
    }
    else if(b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int num1, num2, num3, result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = largest(num1, num2, num3);

    printf("Largest = %d", result);

    return 0;
}
