#include <stdio.h>

int square(int n)
{
    return n * n;
}

int main()
{
    int (*p)(int);

    p = square;

    int result = p(5);

    printf("Square = %d", result);

    return 0;
}
