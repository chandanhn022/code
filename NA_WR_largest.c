#include <stdio.h>

int largest()
{
    int a = 10, b = 20;

    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int result;

    result = largest();

    printf("Largest = %d", result);

    return 0;
}
