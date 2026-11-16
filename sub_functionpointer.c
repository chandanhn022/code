#include <stdio.h>

int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    int (*p)(int, int);

    p = subtract;

    int result = p(50, 20);

    printf("Subtraction = %d", result);

    return 0;
}
