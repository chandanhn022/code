#include <stdio.h>

int divide(int a, int b)
{
    return a / b;
}

int main()
{
    int result;

    result = divide(20, 5);

    printf("Division = %d", result);

    return 0;
}
