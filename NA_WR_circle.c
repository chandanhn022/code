#include <stdio.h>

float area()
{
    float r = 5, a;

    a = 3.14 * r * r;

    return a;
}

int main()
{
    float result;

    result = area();

    printf("Area of circle = %.2f", result);

    return 0;
}
