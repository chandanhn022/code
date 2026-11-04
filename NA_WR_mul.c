#include <stdio.h>

int multiply()
{
    int a = 10, b = 20;
    int result;

    result = a * b;

    return result;
}

int main()
{
    int result;

    result = multiply();

    printf("Multiplication = %d", result);

    return 0;
}
