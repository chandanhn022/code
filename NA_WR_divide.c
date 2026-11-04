#include <stdio.h>

int divide()
{
    int a = 20, b = 5;

    return a / b;
}

int main()
{
    int result;

    result = divide();

    printf("Division = %d", result);

    return 0;
}
