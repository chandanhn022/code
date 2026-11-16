#include <stdio.h>

int largest(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int (*p)(int, int);

    p = largest;

    int result = p(100, 50);

    printf("Largest = %d", result);

    return 0;
}
