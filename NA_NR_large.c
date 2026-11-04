#include <stdio.h>

void largest()
{
    int a = 10, b = 20;

    if(a > b)
    {
        printf("%d is largest", a);
    }
    else
    {
        printf("%d is largest", b);
    }
}

int main()
{
    largest();

    return 0;
}
