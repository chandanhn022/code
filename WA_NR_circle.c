#include <stdio.h>

void area(float r)
{
    float a;

    a = 3.14 * r * r;

    printf("Area of circle = %.2f", a);
}

int main()
{
    area(5);

    return 0;
}
