#include <stdio.h>

int *display()
{
    int a = 100;
    return &a;
}

int main()
{
    int *p;

    p = display();

    printf("Pointer received from function");

    return 0;
}
