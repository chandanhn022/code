#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*p)(int, int);

    p = add;

    int result = p(10, 20);

    printf("Sum = %d", result);

    return 0;
}
