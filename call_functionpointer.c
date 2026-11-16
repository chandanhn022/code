#include <stdio.h>

void display()
{
    printf("Hello World");
}

int main()
{
    void (*p)();

    p = display;

    p();

    return 0;
}
