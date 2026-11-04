#include <stdio.h>

void largest(int a, int b, int c)
{
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
    largest(10, 20, 30);

    return 0;
}
