#include <stdio.h>

int largest()
{
    int a = 10, b = 20, c = 30;

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
    int result;

    result = largest();

    printf("Largest = %d", result);

    return 0;
}
