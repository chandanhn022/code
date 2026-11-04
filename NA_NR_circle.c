#include <stdio.h>

void area()
{
    float r = 5, a;

    a = 3.14 * r * r;

    printf("Area of circle = %.2f", a);
}

int main()
{
    area();

    return 0;
}
