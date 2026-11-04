#include <stdio.h>

int square()
{
    int a = 5;

    return a * a;
}

int main()
{
    int result;

    result = square();

    printf("Square = %d", result);

    return 0;
}
