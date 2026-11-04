#include <stdio.h>

void largest()
{
    int a = 10, b = 20, c = 30;

    if(a > b && a > c)
    {
        printf("%d is largest", a);
    }
    else if(b > a && b > c)
    {
        printf("%d is largest", b);
    }
    else
    {
        printf("%d is largest", c);
    }
}

int main()
{
    largest();

    return 0;
}
